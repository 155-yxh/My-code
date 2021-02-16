#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool cp(int a, int b)
{
  return a>b;
}

int main ()
{
  int a,b,c,tmp,n,i,i1,i2;
  int a1[1200],a2[1200];
  while(cin>>a)
  {
    if(a==0) break;
    for(i=0;i<a;i++)
    {
      cin>>a1[i];
    }
    for(i=0;i<a;i++)
    {
      a2[i]=a1[i];
    }
    sort(a2,a2+a,cp);
    tmp=a1[0];
    a1[0]=a2[0];
    for(i=1;i<a;i++)
    {
      if(a1[i]==a1[0])
      {
        a1[i]=tmp;
        break;
      }
    }
    for(i=0;i<a;i++)
    {
      if(i==a-1) {
        cout<<a1[i]<<endl;
        break;
      }
      cout<<a1[i]<<" ";
    }
  }

  return 0;
}