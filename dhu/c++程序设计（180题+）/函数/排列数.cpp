#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
double jc(int n)
{
  long long i,s=1;
  for (i=2;i<=n;i++)
  {
    s=s*i;
  }
  return s;  
}

int main()
{
  int a,b,n,n1,i;
  double a1;
  cin>>a>>b;
  n=jc(a);
  n1=jc(a-b);
  a1=n/1.0/n1;
  cout<<a1;

  return 0;
}
