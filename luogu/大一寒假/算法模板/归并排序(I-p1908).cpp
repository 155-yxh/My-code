#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

const int MAX=5e5+7;
int a[MAX],t[MAX];
ll n,sum=0;
void merge(int x,int y)  //归并排序升序
{
  if(y-x>1)
  {
     int m=x+(y-x)/2;
     int pos=x,l=x,r=m;
     merge(x, m);
     merge(m, y);
     while(l<m||r<y)
     {
         if(r>=y||(l<m&&a[l]<=a[r]))  t[pos++]=a[l++];
         else t[pos++]=a[r++];
     }
     for(int i=x;i<y;i++)
     {
        a[i]=t[i];
     }
  }
}
void nixu(int x,int y)  //求逆序对
{
  if(y-x>1)
  {
     int m=x+(y-x)/2;
     int pos=x,l=x,r=m;
     nixu(x, m);
     nixu(m, y);
     while(l<m||r<y)
     {
         if(r>=y||(l<m&&a[l]<=a[r]))  t[pos++]=a[l++];
         else {t[pos++]=a[r++];sum+=m-l;}
     }
     for(int i=x;i<y;i++)
     {
        a[i]=t[i];
     }
  }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    nixu(1,n+1);
    cout<<sum;
    system("pause");
    return 0;
}