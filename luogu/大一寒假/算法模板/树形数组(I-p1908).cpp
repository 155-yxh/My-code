#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);


int a[500005],bo[500005],tree[500005]={0};
bool cmp (int a1,int b1)
{
    if(a[a1]!=a[b1])
    return a[a1]>a[b1];
    return a1>b1;
}
int main()
{
    ll n,num=0,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        bo[i]=i;
    }
    sort(bo+1,bo+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        for(int j=bo[i];j<=n;j+=(j&-j))
        {
            tree[j]++;
        }
        for(int j=bo[i]-1;j>0;j-=(j&-j))
        {
            sum+=tree[j];
        }
        num+=sum;
        sum=0;
    }
    cout<<num;
    system("pause");
    return 0;
}