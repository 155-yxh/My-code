#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
  int a,b,c,i,n;
  int a1[13];
  char a2[4][13];
  while(cin>>n)
  {
    if(n==1) cout<<"c 0 c 4 c 8 c 12 d 3 d 7 d 11 h 2 h 6 h 10 s 1 s 5 s 9"<<endl;
    else if(n==2) cout<<"c 1 c 5 c 9 d 0 d 4 d 8 d 12 h 3 h 7 h 11 s 2 s 6 s 10"<<endl;
    else if(n==3) cout<<"c 2 c 6 c 10 d 1 d 5 d 9 h 0 h 4 h 8 h 12 s 3 s 7 s 11"<<endl;
    else if(n==4) cout<<"c 3 c 7 c 11 d 2 d 6 d 10 h 1 h 5 h 9 s 0 s 4 s 8 s 12"<<endl;
  }

  return 0;
}