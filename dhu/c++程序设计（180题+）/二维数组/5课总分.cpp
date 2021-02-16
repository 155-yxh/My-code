#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int a,b,c,i,i1,n,t,sum,sum1=0,sum2=10000000000,num=10,x,x1=0,x2=0;
  int a1[2][10],a2[2][10],a3[2][10];
  while(1)
  {
    sum=0;
    cin>>x;
    for(i=0;i<5;i++)
    {
      cin>>a1[1][i];
      sum+=a1[1][i];
    }
    if(sum>sum1)
    {
      sum1=sum;
      x1=x;
    }
    if(sum<sum2)
    {
      sum2=sum;
      x2=x;
    }
      num--;
      if(num==0) break;
  }
  cout<<x1<<" "<<sum1<<endl;
  cout<<x2<<" "<<sum2<<endl;

  return 0;
}