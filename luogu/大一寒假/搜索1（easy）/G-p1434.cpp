#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int r,c,a[101][101],b[101][101],num=0;
int fx[4]={0,0,1,-1};
int fy[4]={1,-1,0,0};
bool pd(int x1,int y1)
{
    if(x1<=r&&x1>0&&y1>0&&y1<=c)
    {return 1;}
    return 0;
}
int DFS(int x,int y)
{
    if(b[x][y]) return b[x][y];
    b[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int nx,ny;
        nx=x+fx[i];
        ny=y+fy[i];
        if(pd(nx,ny)&&a[nx][ny]<a[x][y])
        {
            DFS(nx,ny);
            b[x][y]=max(b[x][y],b[nx][ny]+1);
        }
    }
    return b[x][y];
}
int main()
{
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int i1=1;i1<=c;i1++)
        {
            cin>>a[i][i1];
        }
    }
    for(int i=1;i<=r;i++)
    {
        for(int i1=1;i1<=c;i1++)
        {
            num=max(num,DFS(i,i1));
        }
    }
    cout<<num;
    return 0;
}