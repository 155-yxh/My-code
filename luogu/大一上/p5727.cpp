#include<iostream>
#include <iomanip>
#include<cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{   
  int a,b,c,i=-1;
  int a1[1000]={0};
  cin>>a;
  b=a;
  if(a==1) cout<<a;
  while(a!=1)
  {
    i++;
    if(a%2==0) a=a/2;
    else a=3*a+1;
    a1[i]=a;
  }
  for(;i>=0;i--)
  {
    if(i==0) {cout<<a1[i]<<" "<<b; break;}
    cout<<a1[i]<<" ";
  }

  return 0;
}