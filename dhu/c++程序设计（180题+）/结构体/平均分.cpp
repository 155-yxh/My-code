#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int t;
    struct test
       {
           int a;
           string a1;
           int b,b1;
           double c1,c2,c3;
       };
    cin>>t;
    while (t--)
    {
       test test1;
       cin>>test1.a>>test1.a1>>test1.b>>test1.b1>>test1.c1>>test1.c2>>test1.c3;
       double sum;
       sum=(test1.c1+test1.c2+test1.c3)/3.0;
       cout<<test1.a<<" "<<test1.a1<<" "<<test1.b<<'/'<<test1.b1<<" "<<test1.c1<<" "<<test1.c2<<" "<<test1.c3<<" "<<fixed<<setprecision(0)<<sum<<endl;
    }

    return 0;
}