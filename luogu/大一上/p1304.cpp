#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
bool zs (int n)
{
  if(n==2) return 1;
  int i;
  for(i=2;i*i<=n;i++)
  {
   if(n%i==0) {return 0;}
  }
  return 1;
}

int main()
{
  int a,i,a1,a2,b;
  cin>>a;
  b=4;
  while(b<=a)
  {
    for(i=2;i<=b/2;i++)
    {
      a1=i;a2=b-i;
      if(zs(a1)&&zs(a2))
      {
        cout<<b<<"="<<a1<<"+"<<a2<<endl; break;
      }
    }
    b+=2;
  }

  return 0;
}