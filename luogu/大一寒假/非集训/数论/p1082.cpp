#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);


int x,y;
void ex_gcd(ll a,ll b,int &x,int &y)
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
ll niyuan(ll a,ll m)//ax≡1(mod m)
{
    ex_gcd(a,m,x,y);
    return (m+x%m)%m;//return x%m 这样写是防止x<0
}
int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<niyuan(a,b);
    system("pause");
    return 0;
}