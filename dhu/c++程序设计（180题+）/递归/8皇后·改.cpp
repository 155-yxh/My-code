#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int a[9][9];
bool p1[9],p2[17]/*右上到左下*/,p3[17]/*左上到右下*/;
int pos[9]={0};
int sum=0,maxs=0;
void queen(int k);
int main()
{
    for(int i=1;i<9;i++)
    {
        for(int i1=1;i1<9;i1++)
        {
            cin>>a[i][i1];
        }
    }
    memset(p1,1,sizeof(p1));
    memset(p2,1,sizeof(p2));
    memset(p3,1,sizeof(p3));
    queen(1);
    cout<<maxs<<endl;
	return 0;
}
void queen(int k)//k为列，i为行
{
    for(int i=1;i<9;i++)
    {
        if(p1[i]&&p2[8-k+i]&&p3[i+k-1])
        {
           pos[k]=i;
           p1[i]=0;
           p2[8-k+i]=0;
           p3[i+k-1]=0;
           if(k==8)
           {
             sum=0;
             for(int i2=1;i2<9;i2++)
             {
                sum+=a[i2][pos[i2]];
             }
             maxs=max(maxs,sum);
           }
           else queen(k+1);
           p1[i]=1;
           p2[8-k+i]=1;
           p3[i+k-1]=1;
        }
    }
}