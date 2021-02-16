#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

struct cf
{
    ll time,val;
}a[10005];

ll dp[10000005]={0};
int main()
{
    int t,m;
    cin>>t>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i].time>>a[i].val;
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=a[i].time;j<=t;j++)
        {
           dp[j]=max(dp[j],dp[j-a[i].time]+a[i].val);
        }
    }
    cout<<dp[t];
    system("pause");
    return 0;
}