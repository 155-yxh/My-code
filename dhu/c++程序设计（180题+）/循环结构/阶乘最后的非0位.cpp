#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
  unsigned long long a,b,n,i;
  cin>>n;
  a=1;
  for(i=2;i<=n;i++)
  {
    a*=i;
    while(a%10==0) 
    {a=a/10;}
    a=a%1000;
  }
  b=a%10;
  cout<<b;

  return 0;
}
