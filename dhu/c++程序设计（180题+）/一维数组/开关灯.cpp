#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
  int n,a,i,b,m1,m2=1,m3;
  while(cin>>n)
  {
    int a1[n];
    b=1;
    for(i=0;i<n;i++)
    {
      a1[i]=0;
    }
    if(n==1) 
    {
      cout<<0<<endl; 
      continue;
    }
    
    for(b=2;b<=n;b++)
    {
      while(1) 
      {
        m1=b*m2;
        if(m1>n) break;
        if(a1[m1-1]==1)  
        {a1[m1-1]=0;}
        else {a1[m1-1]=1;}
        m2++;
      }
      m2=1;  
    }
    for(i=0;i<n;i++)
    {
      if(i!=n-1)cout<<a1[i];
      else cout<<a1[i]<<endl;
    }
  }

  return 0;
}