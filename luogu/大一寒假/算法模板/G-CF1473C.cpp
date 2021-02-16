#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int a[200005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       int num=2*k-n;
       bool bo=0;
       for(int i=1;i<=num-1;i++)
       {
           if(i==1) cout<<1;
           else cout<<" "<<i;
           bo=1;
       }
       for(int i=k;i>=num;i--)
       {
           if(i==k&&bo==0) cout<<i;
           else cout<<" "<<i;
       }
       cout<<endl;
    }

    return 0;
}