#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
void change(char a, char b ,char c);
char a1[4];
int main()
{
  int t,i,a,b;
  cin>>t;
  while(t)
  {
    cin>>a1;
    change(a1[0],a1[1],a1[2]);
    for(i=0;i<3;i++)
    {
    if(i==2) {cout<<a1[i]<<endl; break;}
    cout<<a1[i]<<" ";
    }
    t--;
  }

  return 0;
}
void change(char a, char b ,char c)
{
  int i,tmp;
  if(a1[0]>a1[1])
  {
    tmp=a1[0];
    a1[0]=a1[1];
    a1[1]=tmp;
  }
  if(a1[1]>a1[2])
  {
    tmp=a1[1];
    a1[1]=a1[2];
    a1[2]=tmp;
  }
  if(a1[0]>a1[1])
  {
    tmp=a1[0];
    a1[0]=a1[1];
    a1[1]=tmp;
  }
}
 