#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

ll x,y,ary1[5000006],ary2[5000006];
ll read_int()
{
    ll ans=0,f=1;
    char ch=getchar();
    while(!isdigit(ch)&&ch!=EOF)
    {
        ch=getchar();
    }
    while(isdigit(ch))
    {
        ans=(ans<<3)+(ans<<1)+(ch^48);
        ch=getchar();
    }
    return ans;
}
void ex_gcd(ll a,ll b,ll &x,ll &y)
{
   if(b==0)
   {
       x=1;y=0;
       return;
   }
   ex_gcd(b,a%b,x,y);
   ll tmp=x;
   x=y;
   y=tmp-(a/b)*y;
}
ll niyuan(ll a,ll m)
{
    ex_gcd(a,m,x,y);
    return (m+x%m)%m;
}
int main()
{
    ll n,p,k,sum=0,ans=1;
    n=read_int();p=read_int();k=read_int();
    for(ll i=1;i<=n;i++)
    {
       ary1[i]=read_int();
    }
    ary2[n+1]=1;
    for(ll i=n;i>=1;i--)
    {
       ary2[i]=ary1[i]*ary2[i+1]%p;
    }
    ll ny=niyuan(ary2[1],p);
    for(ll i=1;i<=n;i++)
    {
       ans=ans*k%p;
       ll tmp;
       tmp=ny*ary2[i+1]%p;
       sum=(sum+tmp*ans%p)%p;
       ny=ny*ary1[i]%p;
    }
    printf("%lld\n",sum);
    system("pause");  
    return 0;
}