#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int a[100005],fz1[100005],fz2[100005];
int main()
{
    int n,l1=1,l2=1;
    int j=1;
    while(cin>>a[j])
    {
        j++;
        n=j;
    }
    n--;
    fz1[1]=-a[1];
    fz2[1]=a[1];
    for(int i=2;i<=n;i++)
    {
       if(-a[i]>=fz1[l1]) fz1[++l1]=-a[i];
       else 
       {
          int pos=upper_bound(fz1+1,fz1+l1+1,-a[i])-fz1;
          fz1[pos]=-a[i];
       }
    }
    for(int i=2;i<=n;i++)
    {
       if(a[i]>fz2[l2]) fz2[++l2]=a[i];
       else 
       {
          int pos=lower_bound(fz2+1,fz2+l2+1,a[i])-fz2;
          fz2[pos]=a[i];
       }
    }
    cout<<l1<<endl<<l2;
    system("pause");
    return 0;
}