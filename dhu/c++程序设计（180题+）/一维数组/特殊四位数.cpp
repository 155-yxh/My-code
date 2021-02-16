#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool pd(int a);

int main ()
{
  int a,b,c,n,i;
  int a1[100];
  a1[1]=1156;
  a1[2]=3136;
  n=3;
  for(i=57;i<100;i++)
  {
    if(pd(i*i))
    {
      a1[n]=i*i;
      n++;
    }
  }
  while(cin>>a)
  {
    cout<<a1[a]<<endl;
  }

  return 0;
}
bool pd(int a)
{
  int a1,a2,a3,a4;
  a4=a%10;
  a3=((a-a4)/10)%10;
  a2=((a-a4-a3*10)/100)%10;
  a1=a/1000;
  if(a1+a3==a2*a4) return 1;
  else return 0;
}