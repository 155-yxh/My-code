#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
double jc(int n)
{
  long long i,s=1;
  for (i=2;i<=n;i++)
  {
    s=s*i;
  }
  return s;  
}
int main()
{   
  long long n,b,i;
  long double threshold,e=0,a;
  cin>>threshold;
  i=0;
  n=0;
  while(1)
  {
    i++;
    a=1.0/jc(i);
    if(a<threshold)  {cout<<fixed<<setprecision(6)<<e<<" "<<n; break;}
    e=e+a;
    n++;
    if(i==1){n++;e++;}
  }

  return 0;
}