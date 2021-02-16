#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() 
{
   int a;
   cin>>a;
   if(a%2==0)
   {
     if(a>4&&a<=12) cout<<1<<" ";
     else cout<<0<<" ";
   }
   else cout<<0<<" "; 
   if((a%2==0)||(a>4&&a<=12)) cout<<1<<" ";
   else cout<<0<<" "; 
   if(a%2==0)
   {
     if(a>4&&a<=12) cout<<0<<" ";
     else cout<<1<<" ";
   }
   else if(a>4&&a<=12) cout<<1<<" ";
   else cout<<0<<" ";
   if((a%2!=0)&&(a<=4||a>12)) cout<<1;
   else cout<<0; 

    return 0;
}