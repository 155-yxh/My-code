#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int a[70]={0};
int n,num=1,sum=0,max1=0,min1=70;//num为实际输入个数+1，sum为小木棍长度之和,max1,min1分别为最大最小数
void DFS (int now,int length,int rest,int max2)//length为所求长度期望,rest为层数,now为当前木棍长度
{
   if(rest==0) 
   {
      cout<<length;
      exit(0);
   }
   if(now==length) 
   {
       DFS(0,length,rest-1,max1);
   }
   else
   {
      for(int i=max2;i>=min1;i--)
      {
        if(a[i]!=0&&i+now<=length)
        {
           a[i]--;
           DFS(now+i,length,rest,i);
           a[i]++;
           if(now==0||now+i==length) return;
        }
      }
   }
}
int main()
{
    cin>>n;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        int in;
        cin>>in;
        if(in<=50)
        {
            a[in]++;
            num++;
            sum+=in;
            max1=max(max1,in);
            min1=min(min1,in);
        }
    }
    for(int i=max1;i<=sum/2;i++)
    {
        if(sum%i==0)
        DFS(0,i,sum/i,max1);
    }
    cout<<sum;
    return 0;
}