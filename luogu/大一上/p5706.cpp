#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{   
  int n;
  double t,m;
  cin>>t>>n;
  m=t/n;
  n=2*n;
  cout<<fixed<<setprecision(3)<<m<<endl;
  cout<<n;

  return 0;
}