#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int a,b,c,i,i1,n,t,t1,time=0;
  int a1[20][20]={0};
  cin>>t;
  for(i=0;i<20;i++)
  {
    for(i1=0;i1<20;i1++)
    {
     if(i1==0||i1==i){a1[i][i1]=1;}
     else a1[i][i1]=a1[i-1][i1-1]+a1[i-1][i1];
    }
  }
   while(1)
  {
    cin>>t1;
    b=0;
    for(i=0;i<t1;i++)
    {
      for(i1=0;i1<t1;i1++)
      {
        if(i1!=b) cout<<a1[i][i1]<<" ";
        if(i1==b) 
        {
          if(i==t1-1)
          {
          cout<<a1[i][i1]<<'\n'<<'\n'; 
          break;
          }
          cout<<a1[i][i1]<<'\n'; 
          break;
        }
        
      }
      b++;
    }
    time++;
    if(time==t) break;
  }

  return 0;
}