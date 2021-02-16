#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int a[100005],b[100005],mp[100005],fz[100005];
int main()
{
    int n,m,length=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>a[i];
       mp[a[i]]=i;
    }
    for(int i=1;i<=n;i++)
       cin>>b[i];
    fz[1]=mp[b[1]];
   for(int i=2;i<=n;i++)
   {
       if(mp[b[i]]>fz[length]) fz[++length]=mp[b[i]];
       else 
       {
          int pos=lower_bound(fz+1,fz+length+1,mp[b[i]])-fz;
          fz[pos]=mp[b[i]];
       }
   }
    cout<<length;
    system("pause");
    return 0;
}