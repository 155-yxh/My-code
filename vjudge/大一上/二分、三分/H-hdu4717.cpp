#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
#define ll long long
int n;
int x[1005],y[1005],vx[1005],vy[1005];
double f(double time)
{
    double length,max1;
    max1=((x[0]+vx[0]*time)-(x[1]+vx[1]*time))*((x[0]+vx[0]*time)-(x[1]+vx[1]*time))+((y[0]+vy[0]*time)-(y[1]+vy[1]*time))*((y[0]+vy[0]*time)-(y[1]+vy[1]*time));
    max1=sqrt(max1);
    for(int i=0;i<n;i++)
    {
       for(int i1=i+1;i1<n;i1++)
       {
          length=((x[i]+vx[i]*time)-(x[i1]+vx[i1]*time))*((x[i]+vx[i]*time)-(x[i1]+vx[i1]*time))+((y[i]+vy[i]*time)-(y[i1]+vy[i1]*time))*((y[i]+vy[i]*time)-(y[i1]+vy[i1]*time));
          length=sqrt(length);
          max1=max(max1,length);
       }
    }
    return max1;
}
int main()
{
    int t;
    int num=1;
    cin>>t;
    while(t--)
    {
       cin>>n;
       for(int i=0;i<n;i++)
       {
           cin>>x[i]>>y[i]>>vx[i]>>vy[i];
       }
       double l=0,r=1e8+1;
       for(int i=0;i<100;i++)
       {
           double m1=l+(r-l)/3.0;
           double m2=r-(r-l)/3.0;
          if(f(m1)>f(m2)) l=m1;
          else r=m2;
       }
       cout<<"Case #"<<num<<": "<<fixed<<setprecision(2)<<r<<" "<<f(r)<<endl;
       num++;
    }

    return 0;
}