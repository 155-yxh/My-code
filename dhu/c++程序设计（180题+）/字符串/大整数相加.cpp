#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
      string s1,s2;
      string re;
      cin>>s1>>s2;
      int sizemin=min(s1.size(),s2.size());
      int up=0,add=0,tmp=0,s1s=s1.size(),s2s=s2.size();
      for(int i=1;i<=sizemin;i++)
      {
         add=up+s1[s1s-i]-'0'+s2[s2s-i]-'0';
         up=add/10;
         add=add%10;
         re.push_back(add+'0');
      }
      while(s1s>sizemin)
      {
         add=up+s1[s1s-sizemin-1]-'0';
         up=add/10;
         add=add%10;
         re.push_back(add+'0');
         sizemin++;
      }
      while(s2s>sizemin)
      {
         add=up+s2[s2s-sizemin-1]-'0';
         up=add/10;
         add=add%10;
         re.push_back(add+'0');
         sizemin++;
      }
      if(up>0) re.push_back(up+'0');
      if(j!=1) cout<<endl;
      cout<<"Case "<<j<<":"<<endl;
      cout<<s1<<" + "<<s2<<" = ";
      int a1=re.size() ;
      for(int i1=a1-1;i1>=0;i1--)
      {
        cout<<re[i1];
      }
      cout<<endl;
    }
    return 0;
}