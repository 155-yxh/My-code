#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

struct test
{
    int x,y;
};
int qp[402][402],m,n;
int fxx[8]={-1,1,1,-1,-2,2,2,-2};
int fxy[8]={2,2,-2,-2,1,1,-1,-1};
bool pd(int x1,int y1)
{
    if(x1<=n&&x1>0&&y1>0&&y1<=m)
    {return 1;}
    return 0;
}
void BFS(int x1,int y1)
{
    queue <test> que;
    test start,next;
    start.x=x1; 
    start.y=y1;
    que.push(start);
    qp[x1][y1]=0;
    while(!que.empty())
    {
        start=que.front();
        que.pop();
        for(int i=0;i<8;i++)
        {
            next.x=start.x+fxx[i];
            next.y=start.y+fxy[i];
            if(pd(next.x,next.y)&&qp[next.x][next.y]==-1)
            {
               que.push(next);
               qp[next.x][next.y]=qp[start.x][start.y]+1;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    memset(qp,-1,sizeof(qp));
    cin>>n>>m;
    int x1,y1;
    cin>>x1>>y1;
    BFS(x1,y1);
    cout<<left;
    cout<<setfill(' ');
    for(int i=1;i<=n;i++)
    {
        for(int i1=1;i1<=m;i1++)
        {
           cout<<setw(5)<<qp[i][i1];
        }
        cout<<endl;
    }

    return 0;
}