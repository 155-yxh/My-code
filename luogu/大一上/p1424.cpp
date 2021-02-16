#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  long long a,b,s=0,i;
  cin>>a>>b;
  a=a-1;
  for(i=1;i<=b;i++)
  {
    if(a==8){a=1;}
    a++;
    if(a==6||a==7)
    {continue;}
    else s=s+250;
  }
  cout<<s;

    return 0;
}