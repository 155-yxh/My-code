#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

ll a[200005]={0};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll n,tmp;
    ll sum=-3e9;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>tmp;
       a[i]=max(a[i-1]+tmp,tmp);
       sum=max(sum,a[i]);
    }
    cout<<sum;
    system("pause");
    return 0;
}