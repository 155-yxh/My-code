#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int tongji(double mark[],int n)
{
 int a,b=0,i;
 for(i=0;i<n;i++)
 {
  if(mark[i]<60) b++;
 }
 return b;
}

int main ()
{
   double mark[40];
   int m,n,count;
   cin>>n;
   for (m=0;m<n;m++)
   {
      cin>>mark[m];
   }
    count=tongji(mark, n);
    cout<<count;

  return 0;
}