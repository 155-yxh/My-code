#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{   
  int n,i,a,b,sum;
  while(cin>>n)
  {
    a=4;b=2;
    for(i=7;i>0;i--)
    {
      if(i==n)
      {
        cout<<a<<" "<<b<<endl;
      }
      b=b+a;
      a=b+2;
    }
  }

  return 0;
}