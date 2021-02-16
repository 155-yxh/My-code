#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  long long a,b,c,n,tmp;
  cin>>a>>b>>c;
  if(a>b)
  {
    tmp=a;
    a=b;
    b=tmp;
  }
  if(a>c)
  {
    tmp=a;
    a=c;
    c=tmp;
  }
  if(b>c)
  {
    tmp=b;
    b=c;
    c=tmp;
  }
    for(n=100;n>1;n--)
    {
    if(c%n==0&&a%n==0)
    {c=c/n;a=a/n;}
    }
  {cout<<a<<"/"<<c;}

    return 0;
}