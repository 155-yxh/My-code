#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int n,k;
double line[10005];
bool pd(double mid)
{
   int sum=0;
   for(int i=0;i<n;i++)
   {
      sum+=int (line[i]/mid);
   }
   if(sum>=k) return 1;
   return 0;
}
int main()
{
    while(cin>>n>>k)
    {
        if(n==0&&k==0) break;
        for(int i=0;i<n;i++)
        {
           cin>>line[i];
        }
        sort(line,line+n);
        double left=0,right=line[n-1],mid;
        for(int i=0;i<100;i++)
        {
           mid=(left+right)/2;
           if(pd(mid)) left=mid;
           else right=mid;
        }
        if(mid>=0.01) cout<<fixed<<setprecision(2)<<mid<<endl;
        else cout<<"0.00"<<endl;
    }

    return 0;
}
