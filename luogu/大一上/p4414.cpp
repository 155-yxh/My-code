#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
  int a,b,c,tmp;
  char ch[4];
  cin>>a>>b>>c>>ch;
  if(a>b)
  {
    tmp=a;a=b;b=tmp;
  }
  if(a>c)
  {
    tmp=a;a=c;c=tmp;
  }
  if(b>c)
  {
    tmp=b;b=c;c=tmp;
  }
  if(ch[0]==65&&ch[1]==66&&ch[2]==67)
  {
    cout<<a<<" "<<b<<" "<<c;
  }
  else if(ch[0]==65&&ch[1]==67&&ch[2]==66)
  {
    cout<<a<<" "<<c<<" "<<b;
  }
  else if(ch[0]==66&&ch[1]==65&&ch[2]==67)
  {
    cout<<b<<" "<<a<<" "<<c;
  }
  else if(ch[0]==66&&ch[1]==67&&ch[2]==65)
  {
    cout<<b<<" "<<c<<" "<<a;
  }
  else if(ch[0]==67&&ch[1]==65&&ch[2]==66)
  {
    cout<<c<<" "<<a<<" "<<b;
  }
  else if(ch[0]==67&&ch[1]==66&&ch[2]==65)
  {
    cout<<c<<" "<<b<<" "<<a;
  }

    return 0;
}