#include<iostream>
#include <iomanip>
#include<cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{   
  int a,b,c,i;
  char a1[51]="0";
  cin>>a;
  cin>>a1;
  for(i=0;i<50;i++)
  {
    while(a>=26)
    {
      a-=26;
    }
    if(a1[i]==0) break;
    if(a1[i]+a<='z') a1[i]+=a;
    else a1[i]=a1[i]+a-'z'+'a'-1;
    
  }
  for(i=0;i<50;i++)
  {
    if(a1[i]>'z'||a1[i]<'a') break;
    cout<<a1[i];
  }

  return 0;
}
 