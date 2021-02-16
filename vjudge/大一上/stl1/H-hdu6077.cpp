#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
char a[7][22];
int cz(int c1, int c2);

int main()
{ 
    int m,i;
    cin>>m;
    while(m--)
    {
      for(i=0;i<7;i++)
      {
        for(int i1=0;i1<21;i1++)
        {
          cin>>a[i][i1];
        }
      }   
      cout<<cz(0,3)<<cz(5,8)<<":"<<cz(12,15)<<cz(17,20)<<endl;  
    }

    return 0;
}

int cz(int c1, int c2)
{
  int num=0,i;
  for( i=0;i<7;i++)
  {
    for(int i1=c1;i1<=c2;i1++)
    {
      if(a[i][i1]=='X') num++;
    }
  }
  if(num==4) return 1;
  if(num==6) return 7;
  if(num==8) return 4;
  if(num==14) return 8;
  if(num==10){
    if(a[1][c1]=='X') return 5;
    if(a[4][c1]=='X') return 2;
    else return 3;
  }
  if(num==12){
    if(a[3][c1+1]=='.') return 0;
    if(a[4][c1]=='X') return 6;
    else return 9;
  }
  else return 0;
}