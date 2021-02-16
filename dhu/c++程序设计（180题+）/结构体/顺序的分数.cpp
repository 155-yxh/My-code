#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct test
{
    double fz,fm;
    int num=0;
}t[1005];
map <double,test> mp;
bool cmp(test a,test b)
{
    return a.fz/a.fm<b.fz/b.fm;
}
int main()
{ 
    int n;
    cin>>n;
    cout<<"0/1"<<endl;
    int num1=0;
    if(n>1)
    {
      for(int i=2;i<=n;i++)
      {
          for(int i1=1;i1<i;i1++)
          {
             double x=i,y=i1;
             if(mp[x/y].num==0)
             {
               t[num1].fz=i1;
               t[num1].fm=i;
               num1++;
               mp[x/y].num++;
             }
             else mp[x/y].num++;
          }
      }
      sort(t,t+num1,cmp);
      for(int i=0;i<num1;i++)
      {
         cout<<t[i].fz<<"/"<<t[i].fm<<endl;
      }
    }
    return 0;
}