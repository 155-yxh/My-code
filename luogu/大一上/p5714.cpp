#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() 
{
   double m,h,n;
   cin>>m>>h;
   n=m/(h*h);
   if(n<18.5)
   {
     cout<<"Underweight";
   }
   else if(n>=18.5&&n<24)
   {
     cout<<"Normal";
   }
   else if(n>=24)
   {
     cout<<n<<endl<<"Overweight";
   }
    return 0;
}