#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{   
  int a,b,i,i2;
  bool c=1;
  cin>>a;
  if (a>0)
  { 
    for (i=0;i<a;i++)
    {
      c=1;
      cin>>b;
      for(i2 =2;i2<=b/2;++i2)
      {
        if(b%i2==0) 
        {cout<<"no"<<endl; c=0;break;}
      }
      if(c){cout<<"yes"<<endl;}
    }
   
  }

    return 0;
}