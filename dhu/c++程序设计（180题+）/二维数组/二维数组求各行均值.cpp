#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int a,b,c,i,i1,n,t,sum,a1[3][4];
  double a2[3],ave;
  for(i=0;i<3;i++)
  {
    for(i1=0;i1<4;i1++)
    {
      cin>>a1[i][i1];
    }
    ave=(a1[i][0]+a1[i][1]+a1[i][2]+a1[i][3])/4.0;
    a2[i]=ave;
  }
  for(i=0;i<3;i++)
  {
     cout<<a2[i]<<" ";
    
  }

  return 0;
}