#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
long long a[500005]={0};
int main()
{
    long long l,n,m;
    cin>>l>>n>>m;
    for(int i=1;i<=n;i++)
    {
       cin>>a[i];
    }
    long long mid,left=0;
    long long right=l;
    long long num,pos,len;
    a[n+1]=l;
    while(left<=right)
    {
        mid=(right+left)/2;
        num=0,pos=0;
        for(int i=1;i<=n+1;i++)
        {
            if(a[i]-a[pos]<mid)
            {
                num++;
            }
            else
            {
              pos=i;
            }
        }
        if(num<=m)
        {
           len=mid;
           left=mid+1;
        }
        else if(num>m)
        {
           right=mid-1;
        }
    }
    cout<<len;

    return 0;
}
