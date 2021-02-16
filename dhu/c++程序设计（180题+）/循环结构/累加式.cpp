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
  int n,a,b,c,i;
  while(cin>>n)
  {
	
	
	for(i=1;i<=n;i++)
	{
	  if(i==1)  cout<<1;
	  else cout<<"+"<<i;	
	}
	for(i=n-1;i>0;i--)
	{
	  cout<<"+"<<i;		
	}
	cout<<endl;
  }
  return 0;
}