#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  long long a,a1,b,b1,c,i,tmp,i2;
  bool bo;
  while(cin>>a)
  {
    const long long N=a;
    long long d[N];
    for(i=0;i<a;i++)
    {
      cin>>b;
      d[i]=b;
    }
   for(a1=0;a1<N-1;a1++)
   {  
     bo=1;
     for(b1=0;b1<N-a1-1;b1++)
     {
      if(d[b1]<d[b1+1])
      {
        tmp=d[b1+1];
        d[b1+1]=d[b1];
        d[b1]=tmp;
        bo=0;
      }
     }
      if(bo) break;
   }
   for(i=0;i<a;i++)
   {
     if(i!=a-1) cout<<d[i]<<" ";
     else cout<<d[i]<<" "<<endl;
   }
  }

    return 0;
}