#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
	  int n;
    cin>>n;
    string s="",s1,ss;
    while(cin>>ss)
    {
      s=s+ss;
    }
    s1=s;
    vector <string> str;
    str.push_back(s);
    for(int i=0;i<n-1;i++)
    {
      char tmp=s[0];
      s.erase(s.begin());
      s.push_back(tmp);
      str.push_back(s);
    }
    sort(str.begin(),str.end());
    if(str[0]==s1) cout<<0;
    int num=1;
    while(str[0]!=s1)
    {
      char tmp=str[0][n-1];
      str[0].erase(str[0].begin()+n-1);
      str[0].insert(str[0].begin(),tmp);
      if(str[0]==s1) cout<<num;
      num++;
    }
    return 0;
}