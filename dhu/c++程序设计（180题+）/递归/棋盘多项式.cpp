#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int res[100];
int n;
int a[10][10];
bool change(int x,int y)
{
    for(int i=x-1;i>=0;i--){
        if(a[i][y]==2) return false;
        else if(a[i][y]==0)  break;
    }
    for(int i=x+1;i<n;i++){
        if(a[i][y]==2)  return false;
        else if(a[i][y]==0) break;
    }
    for(int i=y-1;i>=0;i--)
    {
        if(a[x][i]==2)  return false;
        else if(a[x][i]==0)   break;
    }
    for(int i=y+1;i<n;i++)
    {
        if(a[x][i]==2)   return false;
        else if(a[x][i]==0)  break;
    }
    return true;
}
void dfs(int now,int sum)
{
    int x=now/n;
    int y=now%n;
    if(now>n*n)
    {
        res[sum]++;
        return ;
    }
    if(a[x][y]==1)
    {
        if(change(x,y))
        {
            a[x][y]=2;
            dfs(now+1,sum+1);
            a[x][y]=1;
        }
    }
    dfs(now+1,sum);
}
int main()
{
    while(cin>>n){
      memset(res,0,sizeof(res));
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++) cin>>a[i][j];
     }
        dfs(0,0);
        for(int i=1;i<n*n;i++) {if(res[i])   cout<<res[i]<<endl;}
    }
	return 0;
}