#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  long long a,b,c,d=0,n=0,i;
  while(cin>>a)
  {
    for(i=a;i>0;i--)
    {
      if(i%3==0)
      {
        b=i;
        while(b>0)
        {
          c=b%10;
          if(c==5)
          {
            d++;
          }
          b=(b-c)/10;
        }
        if(d>0) n++;
        d=0;
      }
    }
    cout<<n<<endl;
    n=0;
  }

    return 0;
}