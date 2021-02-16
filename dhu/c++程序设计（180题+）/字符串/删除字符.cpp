#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int a,b,c,i,i1,n,t;
  char ch[21],ch1;
  cin.getline(ch,21);
  cin.get(ch1);
  n=0;
  for(i=0;i<20;i++)
  {
    if (ch1==ch[i])
    {
      for(i1=i;i1<19;i1++)
      {
      ch[i1]=ch[i1+1];
      }
      i--;
    } 
  }
  cout<<ch;

  return 0;
}