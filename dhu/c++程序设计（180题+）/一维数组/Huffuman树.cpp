#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
void find1 (int a1[100],int a);

int main ()
{
  int a,b,c,tmp,n,i,money=0;
  cin>>a;
  int a1[a];
  for(i=0;i<a;i++)
  {
    cin>>a1[i];
  }
  sort(a1,a1+a);
  n=a;
  while(n>2)
  {
    a1[1]+=a1[0];
    money+=a1[1];
    for(i=0;i<n-1;i++)
    {
      a1[i]=a1[i+1];
    }
    n--;
    sort(a1,a1+n);
  }
  money+=a1[0]+a1[1];
  
  cout<<money<<endl;

  return 0;
}