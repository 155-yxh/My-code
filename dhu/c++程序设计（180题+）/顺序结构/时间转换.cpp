#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{   
  long long t;
  cin>>t;
  int a,b,c,d;
  a=t/86400;
  d=t%60;
  b=t/3600-a*24;
  c=t/60-a*24*60-b*60;
  cout<<a<<" "<<"days"<<" "<<b<<":"<<c<<":"<<d<<endl;
  return 0;
}