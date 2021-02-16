#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
   double a,b,c,num,mon;
   int m,n,i;
   char a1[10];
   cin>>m;
   while(m)
   {
      cin>>n;
      a=0;
      for(i=0;i<n;i++)
      {
        cin>>a1;
        cin>>num>>mon;
        a=a+num*mon;
      }
      cout<<fixed<<setprecision(1)<<a<<endl;
      m--;
   }

  return 0;
}