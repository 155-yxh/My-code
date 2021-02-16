#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
#define ll long long
int n,a[10005],b[10005],c[10005];
double f(double x)
{
   double max1=a[0]*x*x+b[0]*x+c[0];
   for(int i=1;i<n;i++)
   {
       double fx=a[i]*x*x+b[i]*x+c[i];
       max1=max(max1,fx);
   }
   return max1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       cin>>n;
       for(int i=0;i<n;i++)
       {
           cin>>a[i]>>b[i]>>c[i];
       }
       double l=0.0,r=1000.0;
       for(int i=0;i<100;i++)
       {
           double m1=l+(r-l)/3.0,m2=r-(r-l)/3.0;
           if(f(m1)<f(m2)) r=m2;
           else l=m1;
       }
       cout<<fixed<<setprecision(4)<<f(r)<<endl;
    }

    return 0;
}
