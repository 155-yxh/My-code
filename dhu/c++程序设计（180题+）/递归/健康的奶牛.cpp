#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int vit[500],sl[200][500],ser[1000],out[1000];
int v,g,min1=50000;
bool pd1(int a);
void dfs(int a,int b)
{
    if(a>g)
    {
        if(pd1(b)&&(b<min1))
        {
            min1=b;
            for(int i=1;i<min1+1;i++)
            {
                out[i]=ser[i];
            }
        }
        return;
    }
    ser[b+1]=a; dfs(a+1,b+1);
    ser[b+1]=0; dfs(a+1,b);
}
int main()
{
    cin>>v;
    for(int i=1;i<=v;i++)
    {
        cin>>vit[i];
    }
    cin>>g;
    for(int i=1;i<=g;i++)
    {
        for(int i1=1;i1<=v;i1++) cin>>sl[i][i1];
    }
    dfs(1,0);
    cout<<min1<<" ";
    for(int i=1;i<min1;i++)
    {
        cout<<out[i]<<" ";
    }
    cout<<out[min1];
	return 0;
}
bool pd1(int a)
{
   for(int i=1;i<=v;i++)
   {
       int sum=0;
       for(int i1=0;i1<=a;i1++)
       {
           sum=sum+sl[ser[i1]][i];
       }
           if(sum<vit[i]) 
           return 0;
       
   }
   return 1;
}