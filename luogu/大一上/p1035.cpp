#include<iostream>
#include <iomanip>
#include<cmath>
#include<cstdio>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
  double sn=0,n=0;
  int a,b,k,i;
  cin>>k;
  while(sn<=k)
  {
    n++;
    sn+=1.0/n;
  }
  cout<<n;

  return 0;
}
 

 