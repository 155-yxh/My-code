#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int n,k,a[20];
ll num=0;
bool ss(int x)
{
  if(x==1||x==0) return 0;
  if(x==2||x==3) return 1;
  if(x%6!=1&&x%6!=5) return 0;
  int tmp=sqrt(x);
  for(int i=5;i<=tmp;i=i+6)
  {
    if(x%i==0||x%(i+2)==0) return 0;
  }
  return 1;
}
void DFS(int k1,int sum, int a1)
{
    if(k1==k)
    {
        if(ss(sum)) num++;
    }
    for(int i=a1;i<n;i++)
    {
        DFS(k1+1,sum+a[i],i+1);
    }
}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    DFS(0,0,0);
    cout<<num;
    return 0;
}