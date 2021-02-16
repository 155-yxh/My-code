#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main ()
{
  int a,b,tmp,n,i,i1,i2;
  int a1[100];
  while(cin>>a)
  {
    n=0;
    for(i=0;i<a;i++)
    {
      cin>>a1[i];
    }
    for(i=0;i<a-1-n;i++)
    {
      for(i1=i+1;i1<a-n;i1++)
      {
        if(a1[i]==a1[i1])
        {
          tmp=a1[i];
          for(i2=i;i2<a-n;i2++)
          {
            a1[i2]=a1[i2+1];
          }
          a1[a-n-1]=tmp;
          i--;
          n++;
          break;
        }
      }
    }
    for(i=0;i<a-n;i++)
    {
      if(i==a-n-1){cout<<a1[i]<<endl;;break;}
      cout<<a1[i]<<" ";
    }
  }

  return 0;
}
