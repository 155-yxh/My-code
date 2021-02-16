#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct test
{
  int money=0,out=0,in=0;
};

int main()
{
    map <string,test> mp;
    vector <string> str;
    string ss;
	  int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>ss;
      str.push_back(ss);
    }
    for(int i=0;i<n;i++)
    {
      string s,s1;
      cin>>s;
      int a,b;
      cin>>a>>b;
      if(b==0)  mp[s].money=a;
      else
      {
         for(int i1=0;i1<b;i1++)
         {
            cin>>s1;
            mp[s1].in+=a/b;
         }
         mp[s].money=a%b;
         mp[s].out=a-mp[s].money;
      }
    }
    for(int i=0;i<n;i++)
    {
      mp[str[i]].money=mp[str[i]].in-mp[str[i]].out;
      cout<<str[i]<<" "<<mp[str[i]].money<<endl;
    }
    return 0;
}