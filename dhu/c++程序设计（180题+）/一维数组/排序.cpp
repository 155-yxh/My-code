#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
  int n,a,a1,a2,a3,i,i1,b,b2,m1,m2,m3,tmp;
  int n1[12];
  cin>>n;
  b2=1;
  while(1)
  {
    cin>>a1;
    for(i=0;i<a1;i++)
    {
       cin>>n1[i];
    }
    for(i=0;i<a1-1;i++)
    {
       for(i1=0;i1<a1-1-i;i1++)
       {
         if(n1[i1]>n1[i1+1])
        {
          tmp=n1[i1];
          n1[i1]=n1[i1+1];
          n1[i1+1]=tmp;
        }
       }
    }
    for(i=0;i<a1;i++)
    {
       if(i!=a1-1) cout<<n1[i]<<" ";
       else cout<<n1[i]<<endl;
    }
    if(b2==n) break;
    b2++;
  }

  return 0;
}