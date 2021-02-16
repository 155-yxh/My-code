#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{   
int a,b=0,m=0,n=0,i;
double c=0;
for(i=1;i<21;i++)
{ 
  cin>>a;
  if(a<=-1){m=m+1;}
  b=b+a;
  
}
   
   cout<<m<<" ";
   c=b/20.0;
   cout<<fixed<<setprecision(1)<<c;

    return 0;
}