#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int b[100005],fz[100005];
int main()
{
    int n,length=1;
    cin>>n;
    for(int i=1;i<=n;i++)
       cin>>b[i];
    fz[1]=b[1];
   for(int i=2;i<=n;i++)//最长递增子序列  求最长递减子序列用-b[i]代替b[i]即可
   {
       if(b[i]>fz[length]) fz[++length]=b[i];
       else 
       {
          int pos=lower_bound(fz+1,fz+length+1,b[i])-fz;
          fz[pos]=b[i];
       }
   }
    /*for(int i=2;i<=n;i++)
    {
       if(a[i]>=fz1[l1]) fz1[++l1]=a[i];
       else 
       {
          int pos=upper_bound(fz1+1,fz1+l1+1,a[i])-fz1;
          fz1[pos]=a[i];
       }
    }*/  //最长不降子序列  求最长不升子序列用-b[i]代替b[i]即可
    cout<<length;
    system("pause");
    return 0;
}