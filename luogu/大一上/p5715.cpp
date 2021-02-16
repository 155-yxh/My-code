#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() 
{
   int a,b,c;
   cin>>a>>b>>c;
   if(a>=b&&b>=c)
   {cout<<c<<" "<<b<<" "<<a;}
   else if(a>=b&&c>=b&&a>=c)
   {cout<<b<<" "<<c<<" "<<a;}
   else if(b>=a&&a>=c)
   {cout<<c<<" "<<a<<" "<<b;}
   else if(b>=a&&c>=a&&b>=c)
   {cout<<a<<" "<<c<<" "<<b;}
   else if(c>=b&&b>=a)
   {cout<<a<<" "<<b<<" "<<c;}
   else 
   {cout<<b<<" "<<a<<" "<<c;}
    return 0;
}