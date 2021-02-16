#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
  char ch[102];
  int i;
  cin>>ch;
  for(i=0;i<101;i++)
  {
    if(ch[i]>=97&&ch[i]<=122)
    ch[i]=ch[i]-32;
  }
  cout<<ch;
    return 0;
}
