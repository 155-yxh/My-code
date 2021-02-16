#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
long long a[500005];
long long l,n,m;
bool pd(long long mid)
{
   long long pos=0,num=0;
   for(long long i=1;i<=n+1;i++)
   {
       if(a[i]-a[pos]>mid) 
       {
            if(i-pos==1) return 0;
            pos=i-1;
            i--;
            num++;
       }
   }
   num++;
   if(num<=m) return 1;
   return 0;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    while(cin>>l>>n>>m)
    {
        for(long long i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        long long left=0,right=l,re;
        a[0]=0;
        sort(a,a+n+1);
        a[n+1]=l;
        while(left<=right)
        {
           long long mid=(left+right)/2;
           if(pd(mid))
           {
               right=mid-1;
               re=mid;
           }
           else left=mid+1;
        }
        cout<<re<<endl;
    }

    return 0;
}
