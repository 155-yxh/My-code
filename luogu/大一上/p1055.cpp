#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
  int b;
  char ch[15];
  cin>>ch;
  b=(ch[0]-48)*1+(ch[2]-48)*2+(ch[3]-48)*3+(ch[4]-48)*4+(ch[6]-48)*5+(ch[7]-48)*6+(ch[8]-48)*7+(ch[9]-48)*8+(ch[10]-48)*9;
  b=b%11;
  if(b==10)
  {
    if (ch[12]=='X')
     {cout<<"Right";}
    else
    {
     ch[12]='X';
     cout<<ch;
    }
  }
  else if(b==(ch[12]-48)) 
  cout<<"Right";
  else
  {
    ch[12]=b+48;
    cout<<ch;
  }

    return 0;
}