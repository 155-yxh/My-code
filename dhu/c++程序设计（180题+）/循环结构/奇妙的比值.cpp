#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int sn,n,i,a,a2,a3,x,x2,x3;
  double b,sum=0;
  while(cin>>a)
  {
    sum=0;
    for(i=a-1;i>=1;i--)
    {
      if(a%i==0){sum=sum+i;}
    }
    sum=sum+a;
    b=sum/a;
    cout<<fixed<<setprecision(2)<<b<<endl;
  }
    return 0;
}