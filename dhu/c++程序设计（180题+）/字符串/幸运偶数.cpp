#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int cmp(int a,int b)
{
  return a>b;
}

int main()
{
    string s;
    while(cin>>s)
    {
       for(int i=0;i<s.size();i++)
       {
          if(s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9')
          {s.erase(s.begin()+i); i--;}
       }
       if(s.empty()) cout<<"None"<<endl;

       else {
          sort(s.begin()+0,s.end()+1,cmp);
          cout<<s<<endl;;
         }
    }
    return 0;
}