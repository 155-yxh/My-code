#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool hw (int n)
{
   int i,m=0;
   i=n;
    while(i>0)
    {
        m=m*10+i%10;
        i/=10;
    }
    return m==n;
}

int main ()
{
  int a,a1,b,b1,c,tmp,n,i;
  while(cin>>a)
  {
    if(a==0) break;
    while(1)
    {
      a1=0;
      tmp=a;
      while(a>0)
      {
        a1=a%10+10*a1;
        a/=10;
      }
      b1=tmp+a1;
      cout<<tmp<<"+"<<a1<<"="<<b1<<endl;
      a=b1;
      if(hw(b1)) break;
    }
  }

  return 0;
}