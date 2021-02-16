#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int cmp(int a,int b)
{
  return a>b;
}

int main()
{
    string s,s1;
    while(cin>>s)
    {
       s1.clear();
       for(int i=0;i<s.size();i++)
       {
          if(isdigit(s[i]))
          {
             for(int i1=0;i1<=s[i]-'0';i1++) 
             s1+=s[i+1];
             i++;
          }
           else s1+=s[i];
       }
       for(int i=0;i<s1.size();i++)
       {
          if(i!=0&&i%3==0) cout<<" ";
          cout<<s1[i];
       }
       cout<<endl;
    }

    return 0;
}