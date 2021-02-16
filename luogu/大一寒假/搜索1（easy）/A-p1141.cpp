#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int mg[1005][1005];
int mg1[1005][1005];
int fx[4][2]={{-1,0},{0,-1},{1,0},{0,1}};
int n,m,num=1,lt=0;
int temp[100005];
struct test
{
    int x,y;
};
bool pd(int x1,int y1)
{
    if(x1<=n&&x1>0&&y1>0&&y1<=n)
    {return 1;}
    return 0;
}
void BFS(int x1,int y1)
{
    num=1;
    queue <test> que;
    test start,next;
    start.x=x1;
    start.y=y1;
    lt++;
    mg1[start.x][start.y]=lt;
    que.push(start);
    while(!que.empty())
    {
      start=que.front();
      que.pop();
      for(int i=0;i<4;i++)
      {
          next.x=start.x+fx[i][0];
          next.y=start.y+fx[i][1];
          if(pd(next.x,next.y)&&(mg[start.x][start.y]!=mg[next.x][next.y])&&mg1[next.x][next.y]!=lt)
          {
             mg1[next.x][next.y]=lt;
             que.push(next);
             num++;
          }
      }
    }
    temp[lt]=num;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        string str;
        cin>>str;
        for(int i1=1;i1<=n;i1++)
        {
           mg[i][i1]=str[i1-1]-'0';
        }
    }
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        if(mg1[x][y]!=0) cout<<temp[mg1[x][y]]<<endl;
        else {BFS(x,y); cout<<num<<endl;}
    }

    return 0;
}