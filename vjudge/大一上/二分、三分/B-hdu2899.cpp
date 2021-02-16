#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
double pd(double x,long double y)
{
	return 6*pow(x,7)+8*pow(x,6)+7*pow(x,3)+5*x*x-y*x;
}

double ds(double x,long double y)
{
	return 42*pow(x,6)+48*pow(x,5)+21*pow(x,2)+10*x-y;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       double mid;
       long double y;
       cin>>y;
       double left=0,right=100;
       for(int i=0;i<100;i++)
       {
          mid=(left+right)/2;
          if(ds(mid,y)<0) left=mid;
          else right=mid;
       }
       cout<<fixed<<setprecision(4)<<pd(mid,y)<<endl;
    }

    return 0;
}