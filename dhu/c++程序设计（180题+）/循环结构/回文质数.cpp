#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool hw (int a);

bool zs (int n)
{
  if(n==2) return 1;
  int i;
  for(i=2;i*i<=n;i++)
  {
   if(n%i==0) {return 0;}
  }
  return 1;
}


int main ()
{
  int a,b,n=0,i;
  int c[10005];
  cin>>a>>b;
  if(a%2==0) a++;
  for(i=a;i<=b;i=i+2)
  {
     if(hw(i))
     {
       if(zs(i))
       {
          c[n]=i;
          n++;
       } 
     }
  }
  for(i=0;i<n;i++)
  {
     cout<<c[i]<<endl;
  }

  return 0;
}

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