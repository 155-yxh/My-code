#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int ctoi(char c)
{
    if(c>='0'&&c<='9') return c-'0';
     return c-'a'+10;
}

char itoc(int n)
{
    if(n>=0&&n<=9) return n+'0';
     return n-10+'a';
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int a1=s1.size(),a2=s2.size();
        stack<int> a,b,c;
        for(int i=0;i<a1;i++)
        {
          a.push(ctoi(s1[i]));
        }
        for(int i=0;i<a2;i++)
        {
          b.push(ctoi(s2[i]));
        }
        int x,y,up=0;
        while(!a.empty()&&!b.empty())
        {
           x=a.top();
           y=b.top();
           c.push((x+y+up)%16);
           up=(x+y+up)/16;
           a.pop();
           b.pop();
        }
        while(!a.empty())
        {
          x=a.top();
          c.push((x+up)%16);
          up=(x+up)/16;
          a.pop();
        }
        while(!b.empty())
        {
          x=b.top();
          c.push((x+up)%16);
          up=(x+up)/16;
          b.pop();
        }
        while(!c.empty())
        {
          char x;
          x=itoc(c.top());
          cout<<x;
          c.pop();
        }
        cout<<endl;
    }
    return 0;
}