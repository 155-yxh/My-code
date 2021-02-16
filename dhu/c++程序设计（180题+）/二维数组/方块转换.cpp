#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool way1 (int n);
bool way4 (int n);
bool way5 (int n);
bool way6 (int n);
bool bj (int n);

int a,b,c,tmp,n,i,i1,i2;
char ch1[11][11],ch2[11][11],ch3[11][11],ch[11][11];
int main ()
{
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(i1=1;i1<=n;i1++)
    {
      cin>>ch1[i][i1];
    }
  }
  for(i=1;i<=n;i++)
  {
    for(i1=1;i1<=n;i1++)
    {
      cin>>ch2[i][i1];
    }
  }
  for(i=1;i<=n;i++)
  {
    for(i1=1;i1<=n;i1++)
    {
      ch[i][i1]=ch1[i][i1];
    }
  }
  if(way1(n)) cout<<"1";
  else if(way1(n)) cout<<"2";
  else if(way1(n)) cout<<"3";
  else if(way4(n)) cout<<"4";
  else if(way5(n)) cout<<"5";
  else if(way6(n)) cout<<"6";
  else cout<<"7";
  return 0;
}
bool bj (int n)
{
  for(i=1;i<=n;i++)
  {
    for(i1=1;i1<=n;i1++)
    {
      if(ch2[i][i1]!=ch3[i][i1])
      return 0;
    }
  }
  return 1;
}

bool way1 (int n)
{
  for(i=1;i<=n;i++)
  {
    for(i1=1;i1<=n;i1++)
    {
      ch3[i1][n+1-i]=ch[i][i1];
    }
  }
  for(i=1;i<=n;i++)
  {
    for(i1=1;i1<=n;i1++)
    {
      ch[i][i1]=ch3[i][i1];
    }
  }
  return bj(n);
}

bool way4 (int n)
{
  for(i=1;i<=n;i++)
  {
    for(i1=1;i1<=n;i1++)
    {
      ch3[i][i1]=ch1[i][n+1-i1];
    }
  }
  return bj(n);
}

bool way6 (int n)
{
  for(i=1;i<=n;i++)
  {
    for(i1=1;i1<=n;i1++)
    {
      if(ch2[i][i1]!=ch1[i][i1])
      return 0;
    }
  }
  return 1;
}

bool way5 (int n)
{
  for(i=1;i<=n;i++)
  {
    for(i1=1;i1<=n;i1++)
    {
      ch[i][i1]=ch1[i][i1];
    }
  }
  for(i=1;i<=n;i++)
  {
    for(i1=1;i1<=n;i1++)
    {
      ch3[i][i1]=ch[i][n+1-i1];
    }
  }
  for(i=1;i<=n;i++)
  {
    for(i1=1;i1<=n;i1++)
    {
      ch[i][i1]=ch3[i][i1];
    }
  }
  if(way1(n)) return 1;
  else if(way1(n)) return 1;
  else if(way1(n)) return 1;
  else return 0;
}