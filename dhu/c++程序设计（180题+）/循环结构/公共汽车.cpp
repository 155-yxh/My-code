#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int s,a,n,max,sum;
  while(cin>>s)
  {   
     max=0;
     sum=0;
     n=1;
     a=(s)*(s-1)/2;
     for(;s>1;s--)
    {
      sum=sum+s-n;
      if(sum>=max)
      {max=sum;}
      n++;
    }
    cout<<max<<" "; 
    cout<<a<<endl;
  }

    return 0;
}
