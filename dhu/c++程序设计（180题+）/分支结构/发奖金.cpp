#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int in;
  double out;
  cin>>in;
  if(in<=100000)
  {out=0.1*in;cout<<fixed<<setprecision(2)<<out;}
  else if(in<=200000)
  {out=10000+0.075*(in-100000);cout<<fixed<<setprecision(2)<<out;}
  else if(in<=400000)
  {out=17500+0.05*(in-200000);cout<<fixed<<setprecision(2)<<out;}
  else if(in<=600000)
  {out=27500+0.03*(in-400000);cout<<fixed<<setprecision(2)<<out;}
  else if(in<=1000000)
  {out=33500+0.015*(in-600000);cout<<fixed<<setprecision(2)<<out;} 
  else{out=39500+0.01*(in-1000000);cout<<fixed<<setprecision(2)<<out;}  
  return 0;
}