#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   
  double a,b,n1,n2;
  char c;
  cin>>a>>b;
  cin>>c;
  if(c==43) cout<<a+b;
  else if(c==45) cout<<fixed<<setprecision(1)<<a-b;
  else if(c==42) cout<<fixed<<setprecision(1)<<a*b;
  else if(c==47) 
  {
    if(b==0)cout<<"Wrong!";
    else cout<<fixed<<setprecision(1)<<a/b;
  }
  return 0;
}