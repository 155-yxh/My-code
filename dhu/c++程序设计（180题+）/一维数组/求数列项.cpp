#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main ()
{
  int a,b,c,tmp,n,i;
  int a1[51];
  a1[1]=1;
  a1[2]=5;
  for(i=3;i<51;i++)
  {
    a1[i]=a1[i-1]+(i-3)*3+7;
  }
  while(cin>>a)
  {
    cout<<a1[a]<<endl;
  }

  return 0;
}