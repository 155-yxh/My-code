#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{   
   int a,b,c;
   cin>>a>>b>>c;
   double d;
   d=(a+b+c)/3.0;
   cout<<fixed<<setprecision(2)<<d<<endl;
   return 0;
}