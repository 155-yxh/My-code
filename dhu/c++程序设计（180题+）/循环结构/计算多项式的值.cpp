#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  double sn,n,i,j,j1,a,a2,a3,b,x,x2,x3,m,threshold;
  while(cin>>x)
  {
    cin>>threshold;
    sn=1;
    j=0;j1=0;
    a=1;
    b=1;m=1;n=1;
    while(1)
    {
      for(;m>0;m--)
      {
       a=a*m;
      }
      b++;
      m=b;
      a3=pow(x,n);
      a2=0.5*a3;
      for(;j1>0;j1--){a2=a2*(0.5-j1);}
      n++;
      j++;
      j1=j;
      x3=a2/a;
      x2=fabs(x3);
      if(threshold>1){sn=0;cout<<fixed<<setprecision(6)<<sn<<'\n'<<'\n';break;}
      else if(x2<threshold){cout<<fixed<<setprecision(6)<<sn<<'\n'<<'\n';break;}
      
      sn=sn+x3;
      a=1;
    }

  }

    return 0;
}