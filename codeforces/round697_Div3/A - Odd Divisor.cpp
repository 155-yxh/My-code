#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);
bool pd(ll n)
{
   while(n>1)
   {
      if(n%2==1) return 1;
      n=n/2;
   }
   return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      if(pd(n)) cout<<"YES"<<endl;
      else  cout<<"NO"<<endl;
    }
    return 0;
}