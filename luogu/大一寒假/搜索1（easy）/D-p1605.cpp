#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int n,m,t,xx,yy;
int x2,y2,num=0;
int a[6][6],fx[4]={0,1,0,-1},fy[4]={1,0,-1,0};
bool pd(int x,int y)
{
    if(x>0&&x<=n&&y>0&&y<=m)
    return 1;
    return 0;
}
void DFS(int x,int y)
{
    if(x==x2&&y==y2) 
    {
        num++;
    }
    else 
    {
        if(pd(x,y)&&a[x][y]==0)
        {
            for(int i=0;i<4;i++)
            {
               a[x][y]=1;
               DFS(x+fx[i],y+fy[i]);
               a[x][y]=0;
            }
        } 
    }
}
int main()
{
    cin>>n>>m>>t;
    cin>>xx>>yy>>x2>>y2;
    bool bo=1;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x==x2&&y==y2) {bo=0;break;}
        a[x][y]=1;
    }
    if(bo) DFS(xx,yy);
    cout<<num;
    return 0;
}
