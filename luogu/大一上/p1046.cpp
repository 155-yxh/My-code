#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  long long a[10],b,c,n=0,i,tmp;
  for(i=0;i<=9;i++)
  {
    cin>>a[i];
  }
  cin>>b;
  for(i=0;i<=9;i++)
  {
    if(b+30>=a[i])
    {n++;}
  }
  cout<<n;

    return 0;
}