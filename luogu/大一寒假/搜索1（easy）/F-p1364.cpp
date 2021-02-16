#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int n,num[102],room[102][102],sum=1e9+7;
bool bo[102];
struct test
{
    int pos,length;
};

int BFS(int m)
{
    int sum1=0;
    memset(bo,0,sizeof(bo));
    test sta,next;
    queue <test> que;
    sta.pos=m;
    sta.length=0;
    bo[m]=1;
    que.push(sta);
    while(!que.empty())
    {
       sta=que.front();
       que.pop();
       for(int i=1;i<=n;i++)
       {
          if(bo[i]==0&&room[sta.pos][i])
          {
             next.pos=i;
             next.length=sta.length+1;
             que.push(next);
             sum1+=next.length*num[i];
             bo[i]=1;
          }
       }
    }
    return sum1;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int u,v;
        cin>>num[i]>>u>>v;
        if(u>0) 
        {room[i][u]=1; room[u][i]=1;}
        if(v>0) 
        {room[i][v]=1; room[v][i]=1;}
    }
    for(int i=1;i<=n;i++)
    {
        sum=min(sum,BFS(i));
    }
    cout<<sum;
    return 0;
}