#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
   
   double n;
   while(cin>>n)
   { 
     
   const int S=200,VA=8,VB=5,V=45;
   double s=200,t;
   int i1=1;  
     while(s>=n)
     {
         if(i1%2>0)
       {
        t=s/(VB+V);
        s=s-(VA+VB)*t;
           if(s<n)
          {
            cout<<i1<<endl;continue;
          }
       }
         else 
       {
        t=s/(V+VA);
        s=s-(VA+VB)*t;
           if(s<n)
          {
            cout<<i1<<endl;continue;
          }
       }
       ++i1;
     }
   }


    return 0;
}