#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   
   int a;
   cin>>a;
   if(a<161)
   {cout<<a*10;}
   if(a>160)
   {cout<<(a-160)*30+1600;}
      return 0;
}
