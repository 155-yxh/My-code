#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{   
int c,m=0,b=1000000;
cin>>c;
while(b<2000000)
  {
    b=b*(1+c/100.0);
    m++;
  }
cout<<m;
  
    return 0;
}