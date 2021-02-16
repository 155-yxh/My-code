#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{   
  double r,v;
  cin>>r;
  const double PI=3.1415927;
  v=4/3.0*PI*r*r*r;
  cout<<fixed<<setprecision(3)<<v<<endl;
  return 0;
}