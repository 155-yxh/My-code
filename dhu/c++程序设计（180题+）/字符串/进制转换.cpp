#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
  int n,k,i,i2,i3,i1,k2;
  char ch[100001];
  int a1[100001];
  while(cin>>k)
  {
    cin>>n;
    i1=0;
    i2=0;
    if(n<10)
    {
      while(1)
      {
        a1[i1]=k%n;
        k/=n;
        if(k==0) break;
        i1++;
      }
      for(i=i1;i>=0;i--)
      {
        if(i==0)
        {cout<<a1[0]<<endl;break;}
        cout<<a1[i];
      }
    }
    else if(n==10)
    {
      cout<<k<<endl;
    }
    else if(n>10)
    {
      while(1)
      {
        a1[i2]=k%n;
        k/=n;
        if(k==0) break;
        i2++;
      }
      for(i=i2;i>=0;i--)
      {
        if(a1[i]<10)
        {
          ch[i]=a1[i]+48;
        }
        if(a1[i]>=10)
        {
          ch[i]=a1[i]+55;
        }
      }
      for(i=i2;i>=0;i--)
      {
        cout<<ch[i];
      }
      cout<<endl;
    }
  }
  
  return 0;
}