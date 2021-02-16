#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
double exch (int n);
int main()
{
  int i,start,end;
  cin>>start>>end;
  for(int i=start;i<=end;i+=10)
  {
    cout<<i<<"C="<<exch(i)<<"F"<<endl;
  }

  return 0;
}
double exch(int n)
{
  double a,b,i;
  a=32+n*(9/5.0);
  return a;
}