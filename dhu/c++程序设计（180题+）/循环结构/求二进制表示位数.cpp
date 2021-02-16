#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int a,b[100],c=1,d=0,n=0;
  cin>>a;
	while(a)
  {
		b[++d]=a%2;
    a=a/2;
  }
    for( ;d>0;d--)
    {
      n++;
    }
    cout<<n;
    return 0;
  
}