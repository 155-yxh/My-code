#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int qh (int m,int n,int Fi[]);

int main()
{
    int a,m,n,i,num;
    int Fi[1001];
    Fi[1]=1;Fi[2]=1;Fi[3]=2;Fi[4]=3;Fi[5]=5;Fi[6]=8;Fi[7]=13;
    cin>>m>>n;
    for(i=8;i<=1000;i++)
    {
      Fi[i]=Fi[i-1]+Fi[i-2];
    }
    a=qh(m,n,Fi);
    cout<<a;

    return 0;
}

int qh (int m,int n,int Fi[])
{
  int i,sum=0;
  for(i=1;i<=1000;i++)
  {
    if(m<=Fi[i]&&n>=Fi[i]) sum+=Fi[i];
    else if(Fi[i]>n) break;
  }
  return sum;
}