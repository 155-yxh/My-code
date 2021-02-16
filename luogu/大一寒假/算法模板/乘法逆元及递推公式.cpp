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

int ary[3000005];
int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<quick_pow(a,b-2,b);//非递推
    ary[1]=1;
    printf("%d\n",1);
    for(int i=2;i<=a;i++)//递推
    {
      ary[i]=(b-b/i)*ary[b%i]%b;
      printf("%d\n",ary[i]);
    }
    system("pause");  
    return 0;
}