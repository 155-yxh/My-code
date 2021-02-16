#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
#define ll long long
int n;
double xs[20];
double hs(double x)
{
    double sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum*x+xs[i];
    }
    return sum;
}
int main()
{
    double l,r;
    cin>>n>>l>>r;
    for(int i=0;i<=n;i++)
    {
        cin>>xs[i];
    }   
    for(int i=0;i<100;i++)
    {
        double m1=l+(r-l)/3.0,m2=r-(r-l)/3.0;
        if(hs(m1)>=hs(m2)) r=m2;
        else l=m1;
    }
    cout<<fixed<<setprecision(5)<<r;

    return 0;
}