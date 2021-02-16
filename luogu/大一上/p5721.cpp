#include<iostream>
#include <iomanip>
#include<cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{   
  int a,b,c=0,i,i1;
  cin>>a;
  b=1;
  for(b=1;b<=a;b++)
  {
      cout<<setfill('0');
      cout<<setw(2)<<b;
  }
  cout<<endl;
  for(i1=1;i1<a;i1++)
  {
      for(i=1;i<a-c;i++)
      {
        cout<<setfill('0');
        cout<<setw(2)<<b;
        b++;
      }
      if(i1!=a-1)cout<<endl;
      c++;
  }
  cout<<endl;

  return 0;
}