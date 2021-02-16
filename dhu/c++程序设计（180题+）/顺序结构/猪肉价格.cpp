#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{   
  double a,b,c,d,aver,e;
  cin>>a>>b>>c>>d;
  aver=(a+b+c)/3;
  aver=aver*10;
  aver=round(aver);
  aver=aver/10;
  e=d*aver;
  cout<<fixed<<setprecision(2)<<e<<endl;
  return 0;
}