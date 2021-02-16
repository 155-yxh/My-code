#include <bits/stdc++.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <list>
#include <set>
#include <map>
using namespace std;

int find1(int x, int y, int R, int C);
int a[201][201]={0};

int main()
{
    int r,c;
    int i,i1,l1,l2;
    cin>>r>>c;
    int s=1;
    for( i=0;i<r;i++){
       for(i1=0;i1<c;i1++){
           cin>>a[i][i1];
       }
    }
    int num=1;
    for( i=0;i<r;i++){
       for(i1=0;i1<c;i1++){
         s=max(s,find1(i,i1,r,c));
       }
    }
    cout<<s;

    return 0;
}
int find1(int x, int y, int R, int C)
{
    int width=1;
    for(width=2;x+width-1<R&&y+width-1<C;width++)
    {
       for(int i=x;i<=x+width-1;i++)
       {
         if(a[i][y-1+width]!=a[x][y])
         return (width-1)*(width-1);
       }
       for(int i1=y;i1<=y+width-1;i1++)
       {
          if(a[x-1+width][i1]!=a[x][y])
          return (width-1)*(width-1);
       }
    }
    return (width-1)*(width-1);
}