#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
   int n,m,i,m1;
   cin>>n;
   cin>>m;
   m1=m;
   for(i=1;i<n;i++)
   {
      cin>>m;
      if (m>m1)
      {
        m1=m;  
      }
       
   }
   cout<<m1<<endl;
    return 0;
}