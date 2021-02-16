#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int a,n,n1,n2,sum;
  cin>>n;
  for(;n>0;n--)
  {
    cin>>a;
    if(a>2)
    {
      sum=2;
      n2=0;
      for(;a>2;a--)
      {
        n1=2;n2=0;
        for(n1=2;n1<=a/2;n1++)
       {
        if(a%n1==0)//不是素数
        {n2++;} 
       }
      if(n2>0);
      else sum=sum+a;
      }
    }
    else if(a=2) sum=2;
    else sum=0;
    cout<<sum<<endl;
  }
    return 0;
}