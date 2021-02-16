#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int dp[2005][2005];
string s1,s2;
int main()
{  
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    for(int i=1;i<=n;i++)
    {
        dp[i][0]=i;
    }
    for(int i=1;i<=m;i++)
    {
        dp[0][i]=i;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];
            else 
            {
                dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
            }
        }
    }
    cout<<dp[n][m];
    system("pause");
    return 0;
}