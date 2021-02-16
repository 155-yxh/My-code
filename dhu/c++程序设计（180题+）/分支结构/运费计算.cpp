#include<iostream>
#include<iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
 double a,b,c,m;
 while (cin>>a>>b>>c)
	{
		
		if(c>=250&&c<500)
		{
			m=a*b*c*0.98;
			cout<<fixed<<setprecision(2)<<m<<endl;
		}
    if(c<250)
		{
			m=a*b*c;
			cout<<fixed<<setprecision(2)<<m<<endl;
		}
		if(c>=500&&c<1000)
		{
			m=a*b*c*0.92;
			cout<<fixed<<setprecision(2)<<m<<endl;
		}
    if(c>=2000)
		{
			m=a*b*c*0.85;
			cout<<fixed<<setprecision(2)<<m<<endl;
		}
    if(c>=1000&&c<2000)
		{
			m=a*b*c*0.9;
			cout<<fixed<<setprecision(2)<<m<<endl;
		}
		
	}
 return 0;
}