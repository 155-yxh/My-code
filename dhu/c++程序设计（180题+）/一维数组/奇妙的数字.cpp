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
  int a1[100]={0};
  int i,n,a,b,c,sum,sum1,x,x1;
  x1=8899;
  a=1;
   while(a<=10)//a为第a个满足条件的数
   {
      sum=0;
	    sum1=0;
	    x=x1;
	    while(x>0)
	    {
	      sum=sum+x%10;
	      x/=10;
	    }
      if(sum%17==0)
	    {
	      x=x1+1;
	      while(x>0)
		    {
	        sum1=sum1+x%10;
	        x/=10;
		    }
	      if(sum1%17==0)
		    { 
          a1[a]=x1;
	        a++;
		    }
	    }
      x1++;
   }

   while(cin>>n)
   {
     cout<<a1[n]<<endl;
   }

  return 0;
}