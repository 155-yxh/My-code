#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int a[9][9];
int pos2[9][9]={0},pos[100][9][9]={0};
bool p1[9],p2[17]/*右上到左下*/,p3[17]/*左上到右下*/;
int n,num=0,num1=0;
void queen(int k);
void queen2(int k,int k2);
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int i1=1;i1<=n;i1++)
        {
            cin>>a[i][i1];
        }
    }
    memset(p1,1,sizeof(p1));
    memset(p2,1,sizeof(p2));
    memset(p3,1,sizeof(p3));
    queen(1);
    for(int i=1;i<=num1;i++) queen2(1,i);
    cout<<num;

	return 0;
}
void queen(int k)//k为列，i为行
{
    for(int i=1;i<=n;i++)
    {
        if(p1[i]&&p2[n-k+i]&&p3[i+k-1]&&a[i][k])
        {
           pos2[i][k]=1;
           p1[i]=0;
           p2[n-k+i]=0;
           p3[i+k-1]=0;
           if(k==n)
           {
              num1++;
              for(int j=0;j<9;j++)
              {
                  for(int j1=0;j1<9;j1++)
                  pos[num1][j][j1]=pos2[j][j1];
              }
           }
           else queen(k+1);
           pos2[i][k]=0;
           p1[i]=1;
           p2[n-k+i]=1;
           p3[i+k-1]=1;
        }
    }
}
void queen2(int k,int k2)//k为列，i为行
{
    if(k==1)
    {
      for(int j=1;j<=2*n-1;j++)
      {
        p1[j]=1; p2[j]=1; p3[j]=1;
      }
    }
    for(int i=1;i<=n;i++)
    {
        if(p1[i]&&p2[n-k+i]&&p3[i+k-1]&&a[i][k]&&(pos[k2][i][k]==0))
        {
           p1[i]=0;
           p2[n-k+i]=0;
           p3[i+k-1]=0;
           if(k==n)
           {
              num++;
           }
           else queen2(k+1,k2);
           p1[i]=1;
           p2[n-k+i]=1;
           p3[i+k-1]=1;
        }
    }
}