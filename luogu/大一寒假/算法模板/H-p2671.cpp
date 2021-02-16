#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);


struct test
{
    int num,color;
}ary[100005];
int ans[2][100005]={0},numb[2][100005]={0},mod=10007;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>ary[i].num;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>ary[i].color;
        numb[i%2][ary[i].color]++;
        ans[i%2][ary[i].color]=(ans[i%2][ary[i].color]+ary[i].num)%mod;
    }
    for(int i=1;i<=n;i++)
    {
        sum+=i*(ans[i%2][ary[i].color]+(numb[i%2][ary[i].color]-2)*ary[i].num%mod)%mod;
        sum%=mod;
    }
    cout<<sum;
    system("pause");
    return 0;
}