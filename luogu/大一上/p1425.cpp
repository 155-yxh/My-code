#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{   
  int a,b,c,d,n1,n2;
  cin>>a>>b>>c>>d;
  if(d>=b)
  {
    n1=c-a;
    n2=d-b;
  }
  else
  {
    n1=c-a-1;
    n2=d+60-b;
  }
  cout<<n1<<" "<<n2;

  return 0;
}