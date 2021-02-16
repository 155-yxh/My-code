#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       int one=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='1') one++;
       }
       int sum1=0;
       for(int i=0;i<k;i++)
       {
           int sum=0;
           for(int i1=i;i1<n;i1=i1+k)
           {
               if(s[i1]=='0') sum--;
               else if(s[i1]=='1') sum++;
               if(sum<0) sum=0;
               sum1=max(sum,sum1);
           }
       }
       cout<<one-sum1<<endl;
    }

    return 0;
}
