#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool zs (int n);

int main ()
{
  int m,n,i,a=1,b=1;
  cin>>m>>n;
  int a1[n-m+1]={0};
  for(i=m;i<=n;i++)
  {
    if(zs(i))
    {
      a1[a]=i;
       a++;
    }
  }
  for(i=1;i<n-m+1;i++)
  {
    if(a1[i]==0) break;
    if(i==10*b)
    {
      cout<<a1[i]<<" "<<endl; b++;
    }
    else cout<<a1[i]<<" ";
  }

  return 0;
}

bool zs (int n)
{
  if(n==1||n==0) return 0;
  if(n==2) return 1;
  int i;
  for(i=2;i*i<=n;i++)
  {
   if(n%i==0) {return 0;}
  }
  return 1;
}