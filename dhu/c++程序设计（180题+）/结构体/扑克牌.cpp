#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct test
{
    char a,b;
}pk[13];
bool cmp(test a1,test a2)
{
   if(a1.b!=a2.b) return a1.b>a2.b;
   return a1.a>a2.a;
}

int main ( )
{
    int n;
    cin>>n;
    while(n--)
    {
      for(int i=0;i<4;i++)
      {
         for(int i1=0;i1<13;i1++)
         {
             cin>>pk[i1].a>>pk[i1].b;
             if(pk[i1].b=='A') pk[i1].b='Z';
             else if(pk[i1].b=='K') pk[i1].b='Y';
             else if(pk[i1].b=='Q') pk[i1].b='X';
             else if(pk[i1].b=='J') pk[i1].b='W';
         }
             sort(pk,pk+13,cmp);
             for(int i2=0;i2<13;i2++)
             {
                 if(pk[i2].b=='Z') pk[i2].b='A';
                 else if(pk[i2].b=='Y') pk[i2].b='K';
                 else if(pk[i2].b=='X') pk[i2].b='Q';
                 else if(pk[i2].b=='W') pk[i2].b='J';
             }
             for(int i2=0;i2<12;i2++)
             {
                 cout<<pk[i2].a<<pk[i2].b<<" ";
             }
              cout<<pk[12].a<<pk[12].b<<endl;
      }
      if(n!=0) cout<<endl;
    }

    return 0;
}