#include<iostream>
#include <iomanip>
#include<cmath>
#include<cstdio>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int a1[9000000];
void findnumber(int n)
{
  int i=1;
  while(n!=0)
  {
    a1[i]=n%10;
    n=n/10;
    i++;
  }
  a1[0]=i-1;
}

int main()
{   
  int a,b,c=0,i,n;
  cin>>n>>a;
  for(i=1;i<=n;i++)
  {
    findnumber(i);
    for(b=1;b<=a1[0];b++)
    {
      if(a1[b]==a) {c++;}
    }
  }
  cout<<c;

  return 0;
}