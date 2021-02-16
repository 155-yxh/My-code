#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);


const int M=1e9+7;
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
ll zh(int n1,int k1)//组合数公式取模 n1选k1个数  且合法，n1<1000,k1<1000,M<=1e9+7;
{
    ll ans=1,sum=1;
    for(int i=n1;i>n1-k1;i--)
    {
       ans*=i;
       ans%=M;
    }
    for(int i=1;i<=k1;i++)
    {
        sum*=i;
        sum%=M;
    }
    sum=niyuan(sum,M);
    return (ans*(sum%M))%M;
}