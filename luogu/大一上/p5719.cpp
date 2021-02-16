#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int i,n,k,sum1=0,sum2=0,t1=0,t2=0;
  double a,b;
  cin>>n>>k;
  for(i=1;i<=n;i++)
  {
    if(i%k==0) {sum1=sum1+i; t1++;}
    else {sum2=sum2+i; t2++;}
  }
  a=sum1/(t1*1.0);
  b=sum2/(t2*1.0);
  cout<<fixed<<setprecision(1)<<a<<" "<<b;

  return 0;
}