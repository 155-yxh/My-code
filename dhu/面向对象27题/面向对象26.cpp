#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class Company
{
public:
    static double all;
    double in;
    Company()
    {

    }
    Company(int money)
    {
       in=money;
    }
};
double Company::all=0.0;
class Service:public Company 
{
public:
    Service(int a)
    {
        in=a;
    }
    double tex()
    {
        return 0.05*in;
    }
};
class Manufacturer:public Company 
{
public:
    Manufacturer(int a)
    {
        in=a;
    }
    double tex()
    {
        return 0.17*in;
    }
};
int main()
{
    char kind;
    int money;
    while(cin>>kind>>money)
    {
       if(kind=='S')
       {
           Service s(money);
           s.all+=s.tex();
       }
       else
       {
          Manufacturer m(money);
          m.all+=m.tex();
       }
    }
    cout<<Company::all;
    return 0;
}