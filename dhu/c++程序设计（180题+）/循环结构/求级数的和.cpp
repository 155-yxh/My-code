#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  double a,b,c,d,e,i,n,f,tmp,sum;
  cin>>a;
  sum=1;c=1;d=1;
  f=1;
  do
  {
    tmp=c;d=1;
    b=pow(a,c);
    for(;tmp>0;tmp--)
    {d=d*tmp;}
    e=b/d*pow(-1,c+1);
    f=fabs(e);
    if(f<0.000001) break;
    sum=sum+e;
    c++;
    
  }while(f>=0.000001);
  cout<<fixed<<setprecision(6)<<sum;

    return 0;
}