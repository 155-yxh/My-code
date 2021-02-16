#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int dp[1001][1001],a[10001],b[10001];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
       cin>>a[i];
    for(int i=1;i<=m;i++)
       cin>>b[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            if(a[i]==b[j])
            dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
        }
    }
    cout<<dp[n][m];
    system("pause");
    return 0;
}