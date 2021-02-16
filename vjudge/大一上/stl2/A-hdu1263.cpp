#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct test
      {
        string name;
        string chandi;
        int num;
      };
bool cmp(test a, test b)
{
  if(a.chandi!=b.chandi) return a.chandi<b.chandi;
  return a.name<b.name;
}

int main()
{
    int n,n1;
    cin>>n;
    n1=n;
    while(n--)
    {
      if(n1!=n+1) cout<<endl;
      int m;
      cin>>m;
      test t[110];
      for(int i=0;i<m;i++)
      {
        cin>>t[i].name>>t[i].chandi>>t[i].num;
      }
      sort(t,t+m,cmp);
      string did=t[0].chandi,mingz=t[0].name;
      int bo=1;int cnt=0;
      for(int i=0;i<m;i++)
      {
        if(did!=t[i].chandi){
            did=t[i].chandi;
            mingz=t[i].name;
            bo=1;cnt=0;
        }
        if(did==t[i].chandi){
            if(bo)
            {
                cout<<did<<endl;
                bo=0;
            }
            if(mingz==t[i].name){
                while(mingz==t[i].name&&did==t[i].chandi)
                {
                    cnt=cnt+t[i].num;
                    i++;
                }
                cout<<"   |----"<<mingz<<"("<<cnt<<")"<<endl;
                mingz=t[i].name;
                cnt=0;
                i--;
            }
        }
      }
    }

    return 0;
}