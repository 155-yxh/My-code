#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int main()
{ 
    int a[105],fz1[105],fz2[105],le[105],ri[105];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>a[i];
    }
    fz1[1]=a[1];
    le[1]=1;
    int l1=1,l2=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i]>fz1[l1]) fz1[++l1]=a[i];
        else
        {
           int pos=lower_bound(fz1+1,fz1+l1+1,a[i])-fz1;
           fz1[pos]=a[i];
        }
        le[i]=l1;
    }
    fz2[1]=a[n];
    ri[n]=1;
    for(int i=n-1;i>=1;i--)
    {
        if(a[i]>fz2[l2]) fz2[++l2]=a[i];
        else
        {
           int pos=lower_bound(fz2+1,fz2+l2+1,a[i])-fz2;
           fz2[pos]=a[i];
        }
        ri[i]=l2;
    }
    int sum=-1e9+7;
    for(int i=1;i<=n;i++)
    {
      sum=max(sum,(le[i]+ri[i]-1));
    }
    cout<<n-sum;
    system("pause");
    return 0;
}
