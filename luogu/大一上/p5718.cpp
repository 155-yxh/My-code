#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int a,b,c,i,min;
  cin>>a;
  min=10000;
  for(i=1;i<=a;i++)
  {
    cin>>b;
    if(b<min){min=b;}
  }
  cout<<min;

    return 0;
}