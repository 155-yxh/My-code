#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int dp[10005],a[105];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>=a[i];j--)
        {
            dp[j]+=dp[j-a[i]];
        }
    }
    cout<<dp[m];
    system("pause");
    return 0;
}