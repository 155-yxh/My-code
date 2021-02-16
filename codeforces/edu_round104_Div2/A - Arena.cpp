#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);
 
int a[105];
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      for(int i=1;i<=n;i++)
      {
          cin>>a[i];
      }
      sort(a+1,a+n+1);
      if(a[1]==a[n])
      {
          cout<<0<<endl;
          continue;
      }
      int num=1;
      for(int i=2;i<=n;i++)
      {
         if(a[i]==a[1]) num++;
      }
      cout<<n-num<<endl;
    }
 
    return 0;
}