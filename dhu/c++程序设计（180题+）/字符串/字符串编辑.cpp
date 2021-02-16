#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    string s,s1,s2;
    char ch,ch1,ch2;
    getline(cin,s);
    cin>>ch;
    if(ch=='D')
    {
      cin>>ch1;
      int pos=s.find(ch1);
      if(pos==-1) cout<<"指定字符不存在";
      else 
      {
          s.erase(s.begin()+pos);
          cout<<s;
      }
    }
    else if(ch=='I')
    {
        cin>>ch1>>ch2;
        int pos=s.rfind(ch1);
        if(pos==-1) cout<<"指定字符不存在";
        else
        {
            s.insert(s.begin()+pos,ch2);
            cout<<s;
        }
    }
    else if(ch=='R')
    {
        cin>>ch1>>s2;
        int pos=s.find(ch1);
        if(pos==-1) cout<<"指定字符不存在";
        else
        {
            while(pos!=-1)
            {
                s.replace(pos,1,s2);
                pos=s.find(ch1);
            }
            cout<<s;
        }   
    }
	return 0;
}