#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
double pd(double x)
{
	return 8*pow(x,4)+7*pow(x,3)+2*pow(x,2)+3*x+6;
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
       if(pd(left)>y||pd(right)<y) cout<<"No solution!"<<endl;
     else
     {
       for(int i=0;i<100;i++)
       {
          mid=(left+right)/2;
          if(pd(mid)<y) left=mid;
          else right=mid;
       }
       cout<<fixed<<setprecision(4)<<mid<<endl;
     }
    }

    return 0;
}