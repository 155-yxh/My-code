#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
   double a,b,c,max=0;
   int m,n,i,n1,n2;
   cin>>m;
   while(m)
   {
      cin>>n1>>n2;
      int a1[n1],a2[n1];
      for(i=0;i<n1;i++)
      {
         cin>>a1[i];
      }
      sort(a1,a1+n1);
      a=0;b=100;
      for(i=0;i<n2;i++)
      {
         a=(100-a1[0])*(100-a1[0]);
      } 
      cout<<a<<endl;
      m--;
   }

  return 0;
}