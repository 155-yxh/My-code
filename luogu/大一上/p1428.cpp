#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
  int a,b,i,i1;
  cin>>a;
  int ch[a],ch1[a];
  for(i=0;i<a;i++)
  {
    cin>>ch[i];
  }
  for(i=1;i<a;i++)
  {
    b=0;
    for(i1=1;i1<=i;i1++)
    { 
      if(ch[i]>ch[i-i1])
      {
         b++;
      }
    }
    ch1[i]=b;
  }
  ch1[0]=0;
  for(i=0;i<a;i++)
  {
    if(i==a-1) cout<<ch1[i];
    else cout<<ch1[i]<<" ";
  } 

    return 0;
}