#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int tt[1005];
int main()
{
    
    map<int,int> mp;
    int t;
    cin>>t;
    while(t--)
    {
       memset(tt,0,sizeof(tt));
       mp.clear();
       int num,x1;
       cin>>num;
       for(int i=1;i<=num;i++)
       {
         cin>>x1;
         tt[i]=x1;
       }
       for(int i=1;i<num;i++)
       {
         for(int i1=i+1;i1<=num;i1++)
         {
            mp[tt[i1]-tt[i]]++;
         }
       }
       cout<<mp.size()<<endl;
    }
    return 0;
}