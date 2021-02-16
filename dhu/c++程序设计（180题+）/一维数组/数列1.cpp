#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main ()
{
  int a,b,c,tmp,n,i,i1,i2;
  int a1[50];
  while(cin>>a)
  {
    n=0;
    b=0;
    c=0;
    for(i=0;i<a;i++)
    {
      cin>>a1[i];
    }
    for(i=0;i<a;i++)
    {
      if(a1[i]%11==0) n++;
    }
    if(a>1)
    {
      for(i=0;i<a-1;i++)
      {
        for(i1=i;i1<i+2+b;i1++)
        {
          c+=a1[i1];
        }
        if(c%11==0) n++;
        c=0;
        if(i+b+2>=a) {b=0; continue;}
        b++;
        i--; 
      }
    }
    cout<<n<<endl;
  }

  return 0;
}