#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   
   char a,b,c;
   cin>>a>>b>>c;
   if (a>b&&b>c)
   {cout<<c<<b<<a;}
   else if (a>b&&a>c&&c>b)
   {cout<<b<<c<<a;}
   else if (b>a&&a>c)
   {cout<<c<<a<<b;}
   else if (b>a&&c>a&&b>c)
   {cout<<a<<c<<b;}
   else if (c>a&&a>b)
   {cout<<b<<a<<c;}
   else if (c>a&&c>b&&b>a)
   {cout<<a<<b<<c;}
      return 0;
}
