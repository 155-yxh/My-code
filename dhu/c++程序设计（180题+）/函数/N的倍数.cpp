#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool judge1 (int a);

int main ()
{
  int a,b,c,n,i,i1,i2;
  while(cin>>n)
  {
    a=n;
    for(i=0;;i++)
    {
      n=a*(1+i);
      if(judge1(n))
      {
        cout<<n<<endl;
        break;
      }
    }
  }

  return 0;
}

bool judge1 (int a)
{
  int i,j=0;
  while(j==0||j==1)
  {
    j=a%10;
    if(a<=9) break;
    a/=10;
  }
  if((a==0||a==1)&&(j==0||j==1))
  {
    return 1;
  }
  else return 0;
}
