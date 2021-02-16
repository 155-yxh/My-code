#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);


int x,y;
ll read()
{
    ll ans=0;
    char ch=getchar();
    while(!isdigit(ch)&&ch!=EOF)
    {
        ch=getchar();
    }
    while(isdigit(ch))
    {
        ans=(ans<<3)+(ans<<1)+(ch^48);
        ans%=19260817;
        ch=getchar();
    }
    return ans;
}
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
int niyuan(int a,int m)//ax≡1(mod m)
{
    ex_gcd(a,m,x,y);
    return (m+x%m)%m;//return x%m 这样写是防止x<0
}
int main()
{
    ll a,b,k;
    ll n=19260817;
    a=read();
    b=read();
    k=niyuan(b,n);
    a=a%n;k=k%n;
    ll tmp=(a*k)%n;
    cout<<tmp;
    system("pause");
    return 0;
}