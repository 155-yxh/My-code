#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

ll a[100005],b[100005],c[100005];
ll dp[100005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>c[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>b[i];
        }
        for(int i=2;i<=n;i++)
        {
            if(a[i]==b[i]) dp[i]=c[i]+1;
            else
            {
               int tmp=a[i]-b[i];
               if(tmp<0) tmp=b[i]-a[i];
               dp[i]=max(c[i]+1+dp[i-1]-tmp,tmp+c[i]+1);
            }
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }
    system("pause");
    return 0;
}