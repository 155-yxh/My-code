#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

const ll MAX=1e9+7;
bitset <MAX> is_ss;
ll prime[5000005],num=0;//数组存素数，num存素数量
void ol(ll n)
{
   is_ss[1]=is_ss[0]=1;
   for(ll i=2;i<=n;i++)
   {
      if(is_ss[i]==0)
      {
         prime[num]=i;
         num++;
      }
      for(ll j=0;j<num;j++)
      {
         if(i*prime[j]>n)  break;
         is_ss[i*prime[j]]=1;
         if(i%prime[j]==0) break;
      }
   } 
}

   
    
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll n,q;
    cin>>n>>q;
    ol(n);
    ll m;
    for(ll i=0;i<q;i++)
    {
        cin>>m;
        cout<<prime[m-1]<<endl;
    }
    system("pause");
    return 0;
}