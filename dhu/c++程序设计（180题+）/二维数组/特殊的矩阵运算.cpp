#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int a,b,c,i,i1,n,t=0,m,j,s,b1,b2,b3,b4;
  cin>>m;cin>>n;int a1[n][n];
  while (1)
  {
    for(i=0;i<n;i++)
    {
      for(i1=0;i1<n;i1++)
      {
        cin>>a1[i][i1];
      }
    }
    j=0;s=0;
    for(i=0;i<n;i++)
    {
     j=j+a1[i][i]*a1[n-1-i][i];
     s=s+a1[i][i]/a1[n-1-i][i];
    }
    cout<<j<<" "<<s<<endl;
    t++;
    if(t==m) break;
  }

  return 0;
}