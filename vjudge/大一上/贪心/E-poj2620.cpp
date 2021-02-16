#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <list>
#include <set>
#include <map>
#include <queue>
using namespace std;
struct test
    {
       int x,y;
    }t1[100005],t2[100005];
bool cmp(test a, test b)
{
    return a.y>b.y;
}

int main()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int m;
    cin>>m;
    int i=0;
    while(1)
    {
        cin>>t1[i].x>>t1[i].y;
        if(t1[i].x==0&&t1[i].y==0) break;
        i++;
    }
    sort(t1,t1+i,cmp);
    int ri=0,num=0;
    while(ri<m)
    {
      int i1;
      for( i1=0;i1<i;i1++)
      {
        if(t1[i1].x<=ri&&t1[i1].y>ri)
        {
          t2[num]=t1[i1];
          num++;
          ri=t1[i1].y;
          break;
        }
      }
      if(i1==i) break;
    }
    if(ri<m) cout<<"No solution"<<endl;
    else{
        cout<<num<<endl;
        for(int i1=0;i1<num;i1++)
        {cout<<t2[i1].x<<" "<<t2[i1].y<<endl;}
    }
    
	return 0;
}