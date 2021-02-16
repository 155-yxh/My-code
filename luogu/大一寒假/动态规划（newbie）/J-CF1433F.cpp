#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int dp[75][75][40][75];
int a[75][75];
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));
    dp[0][0][0][0]=dp[1][1][0][0]=dp[1][0][0][0]=0;
    for(int i=0;i<=n;i++)
      for(int j=0;j<=m;j++)
        for(int d=0;d<=m/2&&d<=j;d++)
           for(int p=0;p<k;p++)
           {
              if(dp[i][j][d][p]==-1) continue;
              if(j==m)
              {
                  dp[i+1][1][0][p]=max(dp[i+1][1][0][p],dp[i][j][d][p]);
                  if(d<m/2)
                  {
                     int tmp=(p+a[i][j])%k;
                     dp[i+1][1][0][tmp]=max(dp[i+1][1][0][tmp],dp[i][j][d][p]+a[i][j]);
                  }
              }
              else
              {
                 dp[i][j+1][d][p]=max(dp[i][j+1][d][p],dp[i][j][d][p]);
                  if(d<m/2)
                  {
                     int tmp=(p+a[i][j])%k;
                     dp[i][j+1][d+1][tmp]=max(dp[i][j+1][d+1][tmp],dp[i][j][d][p]+a[i][j]);
                  } 
              }
           }
    dp[n+1][1][0][0]=max(dp[n+1][1][0][0],0);    
    cout<<dp[n+1][1][0][0];
    system("pause");
    return 0;
}