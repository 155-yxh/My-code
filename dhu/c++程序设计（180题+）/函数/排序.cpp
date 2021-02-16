#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main ()
{
int b,tmp,n,t,i,i1;
int a[10];
cin>>n;
while(n)
{
  for(i=0;i<10;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<9;i++)
  {
    for(i1=0;i1<9-i;i1++)
    {
      if(a[i1]>a[i1+1])
      {
        tmp=a[i1];
        a[i1]=a[i1+1];
        a[i1+1]=tmp;
      }
    }
  }
  cout<<a[0];
  for(i=1;i<10;i++)
  {
  cout<<" "<<a[i];
  }
  cout<<endl;
  n--;
}

return 0;
}