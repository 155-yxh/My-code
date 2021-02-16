#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int lcm(int a,int b)//最小公倍数
{
    return a*b/(__gcd(a,b));
}
int x,y;
void ex_gcd(int a,int b,int &x,int &y)
{
   if(b==0)
   {
       x=1;y=0;
       return;
   }
   ex_gcd(b,a%b,x,y);
   int tmp=x;
   x=y;
   y=tmp-(a/b)*y;
}
int niyuan(int a,int m)//ax≡1(mod m) 求出a模m的逆元
{
    ex_gcd(a,m,x,y);
    return (m+x%m)%m;//return x%m 这样写是防止x<0
}
int main()
{
    ex_gcd(3,4,x,y);
    int n=12;
    x=x*12/__gcd(3,4);
    y=y*12/__gcd(3,4);
    system("pause");
    return 0;
}