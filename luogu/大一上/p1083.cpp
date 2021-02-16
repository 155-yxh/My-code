#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int m,n;
int classroom[1000005],d1[1000005],s1[1000005],t1[1000005],tmp[1000005];
bool pd(int k)
{
   int sum=0;
   memset(tmp,0,sizeof(tmp));
   for(int i=1;i<=k;i++)
   {
      tmp[s1[i]]+=d1[i];
      tmp[t1[i]+1]-=d1[i];
   }
   for(int i=1;i<=n;i++)
   {
       sum+=tmp[i];
       if(sum>classroom[i]) return 0;
   }
   return 1;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        classroom[i]=a;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>d1[i]>>s1[i]>>t1[i];
    }
    int left=1,right=m;
    if(pd(m)) cout<<0;
    else 
    {
    while(left<=right)
    {
       int mid=(left+right)/2;
       if(pd(mid)) left=mid+1;
       else right=mid-1;
    }
    cout<<"-1"<<endl<<left;
    }

    return 0;
}