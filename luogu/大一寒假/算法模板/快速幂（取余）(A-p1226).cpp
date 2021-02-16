#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

ll quick_pow(ll x,ll y,ll k)//返回x的y次方除以k的余数
{
   if(k==1) return 0;
   ll ans=1,base=x;
   while(y>0)
   {
       if(y&1)
       {ans*=base; ans%=k;}
       base*=base;
       base%=k;
       y>>=1;
   }
   return ans;
}
ll pow1 (ll a,ll b)//返回a的b次方
{
    ll ans=1,base=a;
    while(b!=0)
    {
        if(b&1!=0)
        {ans*=base;}
        base*=base;
        b>>=1;
    }
    return ans;
}
   
    
int main()
{
    int b,p,k;
    cin>>b>>p>>k;
    cout<<b<<"^"<<p<<" mod "<<k<<"="<<quick_pow(b,p,k);
    system("pause");
    return 0;
}