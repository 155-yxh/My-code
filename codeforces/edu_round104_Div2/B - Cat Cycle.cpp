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
      int n,k;
      cin>>n>>k;
      if(n%2==0||k<=n/2)
      {
         if(k%n==0) cout<<n<<endl;
         else cout<<k%n<<endl;
         continue;
      }
      else
      {
         if(k<n)
         {
            cout<<k+1<<endl;
            continue;
         }
         ll mov=1+(k-n/2-1)/(n/2);
         ll ans=0;
         if(k%n==0) ans=n;
         else ans=k%n;
         ans+=mov;
         ans%=n;
         if(ans%n==0) cout<<n<<endl;
         else cout<<ans%n<<endl;
      }
    }
    return 0;
}