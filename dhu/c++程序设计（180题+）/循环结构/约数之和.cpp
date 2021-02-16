#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{   
  int a,b=0,i;
  bool c=1;
  while(cin>>a)
  {
    for(i=1;i<=a;i++)
    {
      if(a%i==0)
      {
        b=b+i;
      }
    }
    cout<<b<<endl;
    b=0;
  }

    return 0;
}