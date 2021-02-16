#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int i,n,t1=0;
  double a,b;
  cin>>n;
  while(n>=1)
  {
    n/=2;
    t1++;
  }
  cout<<t1;

  return 0;
}