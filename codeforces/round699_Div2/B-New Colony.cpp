#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

ll a[105];
int main()
{
    a[0]=1e9+7;
    int t;
    cin>>t;
    while(t--)
    {
      int n,k,pos=0;
      ll max1=0,sum=0;
      bool bo=0;
      cin>>n>>k;
      for(int i=1;i<=n;i++)
      {
          cin>>a[i];
          if(a[i]>a[i-1]) 
          {
              bo=1;
          }
      }
      if(bo==0)
      {
          cout<<-1<<endl;
          continue;
      }
      
      if(k>10000)
      {
          cout<<-1<<endl;
          continue;
      }
      int p=-1;
      for(int i=1;i<=k;i++) 
      {
          int tmp;
          bool flag=0;
          for(int j=1;j<n;j++)
          {
              if(a[j]<a[j+1]) 
              {
                  a[j]++;
                  p=j;
                  flag=1;
                  break;
              }
          }
          if(flag==0) p=-1;
      }
      cout<<p<<endl;
    }
    system("pause");
    return 0;
}