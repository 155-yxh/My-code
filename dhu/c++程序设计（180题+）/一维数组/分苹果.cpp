#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;


int main ( )
{
    int m,n;
    cin>>n>>m;
    int a[100003];
    while(m--)
    {
        int l,r,c;
        cin>>l>>r>>c;
        a[r]=a[r]+c;
        a[l-1]=a[l-1]-c;
    }
    for(int i=n-1;i>=1;i--)
    {
        a[i]+=a[i+1];
    }
      
    for(int i=1;i<=n;i++)
    {
       cout<<a[i]<<" ";
    }

    return 0;
}