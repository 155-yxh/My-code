#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

ll n,m,x,y;
ll a[25][25]={0};
bool ma[25][25]={0};
int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};
bool check(int x,int y)
{ 
  if(x>=0&&x<=n&&y>=0&&y<=m) return 1;
  return 0;
}
int main()
{
    cin>>n>>m>>x>>y;
    a[0][0]=1;
    ma[x][y]=1;
    for(int i=0;i<8;i++)
    {
        if(check(x+dx[i],y+dy[i]));
        ma[x+dx[i]][y+dy[i]]=1;
    }
    for(int i=0;i<=n;i++)
    {
       for(int j=0;j<=m;j++)
       {
          if(ma[i][j]==1) {continue;}
          if(i-1>=0&&j-1>=0)
             a[i][j]=a[i-1][j]+a[i][j-1];
          else if(i-1>=0)
             a[i][j]=a[i-1][j];
          else if(j-1>=0)
             a[i][j]=a[i][j-1];
       }
    }
    cout<<a[n][m];
    system("pause");
    return 0;
}