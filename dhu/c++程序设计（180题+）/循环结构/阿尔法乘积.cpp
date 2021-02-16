#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  long long a,b,c=1,d;
  cin>>a;
	if(a<10) cout<<a<<endl;
  else 
  {  while(a>=1)
    { 
      b=a%10;
      if(b==0);
      else c*=b;
      a=(a-b)/10;
    }
    for(;c>=10;)
    { 
      a=c;
      c=1;
      while(a>=1)
      {
        b=a%10;
        if(b==0);
        else c*=b;
        a=(a-b)/10;
      }
    }
    cout<<c;
  }

    return 0;
}