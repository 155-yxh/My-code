
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);
 
 
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      if(n<5)
      {
         cout<<0<<endl;
         continue;
      }
      ll ans=0;
      ans=2*n-1;
      int num=int(sqrt(ans));
      if(num%2==1)
      {
          cout<<num/2<<endl;
          continue;
      }
      else cout<<(num-1)/2<<endl;
    }
 
    return 0;
}