#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{   
  double f,c;
  cin>>f;
  c=(5/9.0)*(f-32);
  cout<<fixed<<setprecision(1)<<c<<endl;
  return 0;
}