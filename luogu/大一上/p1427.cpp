#include<iostream>
#include <iomanip>
#include<cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{   
  int a[101],b,c,i;
  for(i=0;i<100;i++)
  {
    cin>>a[i];
    if(a[i]==0) break;

  }
  i=i-1;
  for(b=i;b>=0;b--)
  {
    if(b==0){cout<<a[0];break;}
    cout<<a[b]<<" ";
  }

  return 0;
}