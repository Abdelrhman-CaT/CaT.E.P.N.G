#include <iostream>
#include <cmath>
#include <stdlib.h> //or cstdlib
#include <ctime>
#include <fstream>

using namespace std;
ofstream myfile;

int ident;
bool is_phone(int x)
{
    if(x==1 || x==5 || x==2 || x==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void test(int y)
{
    if(is_phone(y))
    {
        ident = y;
        myfile << y;
    }
    else
    {
        int z=rand()%10;
        test(z);
    }
}

bool is_zero(int x)
    {
        if(x==0 || x==6)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

void test0(int y)
    {
        if(is_zero(y))
        {
            myfile << y;
        }
        else
        {
            int z=rand()%10;
            test0(z);
        }
    }

bool is_one(int x)
    {
        if(x==1 || x==4 || x==5)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

void test1(int y)
    {
        if(is_one(y))
        {
            myfile << y;
        }
        else
        {
            int z= rand()%10;
            test1(z);
        }
    }

bool is_two(int x)
    {
        if(x==2 || x==7 || x==8)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

void test2(int y)
    {
        if(is_two(y))
        {
            myfile << y;
        }
        else
        {
            int z=rand()%10;
            test2(z);
        }
    }

int main()
{
cout << endl;
cout << "         CCCCCCCCCCCCC               TTTTTTTTTTTTTTTTTTTTTTT" << endl;
cout << "      CCC::::::::::::C               T:::::::::::::::::::::T" << endl;
cout << "    CC:::::::::::::::C               T:::::::::::::::::::::T" << endl;
cout << "   C:::::CCCCCCCC::::C               T:::::TT:::::::TT:::::T" << endl;
cout << "  C:::::C       CCCCCC  aaaaaaaaaaaaaTTTTTT  T:::::T  TTTTTT" << endl;
cout << " C:::::C                a::::::::::::a       T:::::T" << endl;
cout << " C:::::C                aaaaaaaaa:::::a      T:::::T" << endl;
cout << " C:::::C                         a::::a      T:::::T" << endl;
cout << " C:::::C                  aaaaaaa:::::a      T:::::T" << endl;
cout << " C:::::C                aa::::::::::::a      T:::::T" << endl;
cout << " C:::::C               a::::aaaa::::::a      T:::::T" << endl;
cout << "  C:::::C       CCCCCCa::::a    a:::::a      T:::::T" << endl;
cout << "   C:::::CCCCCCCC::::Ca::::a    a:::::a    TT:::::::TT" << endl;
cout << "    CC:::::::::::::::Ca:::::aaaa::::::a    T:::::::::T" << endl;
cout << "      CCC::::::::::::C a::::::::::aa:::a   T:::::::::T" << endl;
cout << "         CCCCCCCCCCCCC  aaaaaaaaaa  aaaa   TTTTTTTTTTT" << endl;
cout << endl;



    myfile.open ("result.txt");

    myfile << "The Phone Numbers you asked for:\n---------------------------------------------------\n";

    int n;
    cout << "How many phone numbers do you want: ";
    cout << "                         By: Mr.CaT" << endl;
    cin >> n;

    srand(time(0)); //or using Time.cpp files from Big C++

    for(int i=1 ; i<= n ; i++)
    {
        myfile << "0" << 1;
        for(int j=1 ; j<=9 ; j++)
        {
          int r=rand()%10;

          if(j==1)
          {
            test(r);
          }
          else if(j==2)
          {
             switch(ident)
             {
             case(0):
                 test0(r);
                break;
             case(1):
                 test1(r);
                 break;
             case(2):
                 test2(r);
                 break;
             case(5):
                 myfile << r;
                 break;
             }
          }
          else
          {
            myfile << rand()%10;
          }

        }
        myfile << endl;
    }

    myfile.close();


return 0;
}
