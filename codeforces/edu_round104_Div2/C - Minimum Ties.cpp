#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);
 
int mp[105][105];
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      if(n==2)
      {
          cout<<0<<endl;
          continue;
      }
      int a=(n-1)%2;
      bool bo=1;
      if(a==1)
      {
        for(int i=1;i<=n;i++)
           mp[i][n+1-i]=0;
        for(int i=1;i<=n;i++)
        {
          int numb=1;
          if(i%2==0) numb=-1;
          for(int j=1;j<=n;j++)
          {
            if(j==n+1-i) continue;
            mp[i][j]=numb;
            numb=0-numb;
          } 
        }
        for(int i=1;i<=n;i++)
        {
         for(int j=i+1;j<=n;j++)
         {
            cout<<mp[i][j]<<" ";
         } 
        }
      }
      else
      {
        for(int i=1;i<n;i++)
        {
         for(int j=i+1;j<=n;j++)
         {
              if(bo==1) {cout<<1<<" "; bo=0;}
              else {cout<<-1<<" "; bo=1;}
         } 
        }
      }
      cout<<endl;
    }
 
    return 0;
}