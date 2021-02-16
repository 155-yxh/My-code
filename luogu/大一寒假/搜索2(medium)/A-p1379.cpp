#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int fx[4]={0,1,0,-1},fy[4]={1,0,-1,0},tu[4][4];
int sta,goal=123804765;
bool check(int nx,int ny)
{
  if(nx<1||nx>3||ny>3||ny<1)
  return 1;
  return 0;
}
void BFS (int sta)
{
  map <int,int> mp,step;
  queue <int> que;
  que.push(sta);
  que.push(goal);
  step[sta]=0;step[goal]=0;
  mp[sta]=1;mp[goal]=2;
  while(!que.empty())
  {
    int now,beg=que.front();
    now=beg;
    que.pop();
    int px,py;
    for(int i=3;i>0;i--)
    {
      for(int i1=3;i1>0;i1--)
      {
        tu[i][i1]=now%10;
        now/=10;
        if(tu[i][i1]==0) 
        {
          px=i; py=i1;
        }
      }
    }
    int nx,ny;
    for(int i=0;i<4;i++)
    {
      nx=fx[i]+px;
      ny=fy[i]+py;
      if(check(nx,ny)) continue;
      swap(tu[px][py],tu[nx][ny]);
      now=0;
      for(int j=1;j<=3;j++)
      {
        for(int j1=1;j1<=3;j1++)
        {
           now=now*10+tu[j][j1];
        }
      }
      if(mp[now]==mp[beg])
      {
        swap(tu[px][py],tu[nx][ny]);
        continue;
      }
      if(mp[now]+mp[beg]==3)
      {
         cout<<step[now]+step[beg]+1;//刚刚这步还没走所以加一
         exit(0);
      }
      step[now]=step[beg]+1;
      mp[now]=mp[beg];
      que.push(now);
      swap(tu[px][py],tu[nx][ny]);
    }
  }

}

int main()
{
    cin>>sta;
    if(sta==goal) cout<<"0";
    else BFS(sta);
    return 0;
}
