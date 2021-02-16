#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      vector <string> str;
      vector <int> in;
      string s1,tmp;
      cin>>s1;
      int pos=0;
      while(pos!=-1)
      {
        pos=s1.find('5');
        while(s1[pos+1]=='5')
        {
          s1.erase(s1.begin()+pos+1);
        }
        if(pos==0) break;
        tmp=s1.substr(0,pos);
        s1.erase(s1.begin(),s1.begin()+pos+1);
        str.push_back(tmp);
        if(s1=="") break;
      }
      int strs=str.size();
      for(int i=0;i<strs;i++)
      {
        int a1=count(str[i].begin(),str[i].end(),'0');
        int b1=str[i].size();
        if(a1==b1) str[i]="0";
        else
        {
          while(1)
          {
            if(str[i][0]=='0')
            {
              str[i].erase(str[i].begin());
            }
            else break;
          }
        }
      }
      int ss=str.size();
      for(int i=0;i<ss;i++)
      {
        in.push_back(0);
        for(int i1=0;i1<str[i].size();i1++)
        {
          in[i]=10*in[i]+str[i][i1]-'0';
        }
      }
      sort(in.begin(),in.end());
      int ss2=in.size();
      for(int i=0;i<ss2;i++)
      {
        if(i!=0) cout<<" ";
        cout<<in[i];
      }
      cout<<endl;
    }
    return 0;
}