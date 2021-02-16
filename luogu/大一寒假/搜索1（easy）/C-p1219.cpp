#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int n;
int num=0,numb=0,a[15];
bool p1[14],p2[28],p3[28];//p2左下到右上，p3左上到右下

void DFS(int n,int k=1)
{
    for(int i=1;i<=n;i++)
    {
       if(p1[i]&&p2[n-k+i]&&p3[i+k-1])
       {
           a[k]=i;
           p1[i]=0;p2[n-k+i]=0;p3[i+k-1]=0;
           if(k==n)
           {
             num++;
             if(numb<=2)
             {
                 cout<<a[1];
                 for(int j=2;j<=n;j++)
                 {
                     cout<<" "<<a[j];
                 }
                 cout<<endl;
             }
             numb++;
           }
           else DFS(n,k+1);
           p1[i]=1;p2[n-k+i]=1;p3[i+k-1]=1;
       }
    }
}
int main()
{
    cin>>n;
    memset(p1,1,sizeof(p1));
    memset(p2,1,sizeof(p2));
    memset(p3,1,sizeof(p3));
    DFS(n);
    cout<<num;
    return 0;
}
