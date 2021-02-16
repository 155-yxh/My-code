#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int cut (int a);
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


int main()
{
    int a,n,i,num;
    cin>>num;
    while(num)
    {
      cin>>a;
      n=cut(a);
      cout<<n<<endl;
      num--;
    }

    return 0;
}

int cut (int a)
{
  int i,i1,b,n=0;
  for(i=3;i<a/2;i=i+2)
  {
    if(zs(i))
    {
      i1=a-i;
      if(i1>i&&zs(i1))
      {
        n++;
      }
    }
  }
  return n;
}