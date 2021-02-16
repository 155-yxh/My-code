#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

const double PI=acos(-1.0);
int a[10005];
double v[10005];
int n,f;
inline double tj(double s)
{
   return PI*s*s;
}
bool pd(double mid)
{
   int sum=0;
   for(int i=0;i<n;i++)
   {
      sum+=int(v[i]/mid);
   }
   if(sum>=f+1) return 1;
   return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>f;
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
           v[i]=tj(a[i]);
        }
        sort(v,v+n);
        if(n==1) cout<<fixed<<setprecision(4)<<v[n-1]/(f+1)<<endl;
        else
        {
           double left=0,right=v[n-1],mid;
           for(int i=0;i<100;i++)
           {
              mid=(left+right)/2;
              if(pd(mid)) left=mid;
              else right=mid;
           }
           cout<<fixed<<setprecision(4)<<left<<endl;
        }
    }

    return 0;
}