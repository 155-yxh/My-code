#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
  unsigned long long a,max=0,n,i,s;
  cin>>a;
  for(i=a;i>1;i--)
  {
    s=i;
    while(s!=1)
    {  
      if(s>max) max=s;
      if(s%2==0) s=s/2;
      else if(s%2==1) s=s*3+1;
    }
  }
  cout<<max;

  return 0;
}