#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    string s,s1,tmp;
    while(getline(cin,s))
    {
      s1.clear();
      tmp.clear();
      for(int i=0;i<s.size();i++)
      {
        if(isalpha(s[i]))
        {
          for(int i1=i;i1<2*s.size();i1++)
          {
            if(isalpha(s[i1])) {tmp=tmp+s[i1]; i=i1;}
            else { 
              if(tmp.size()>s1.size()) {s1=tmp;}
              tmp.clear();
              break;
              } 
          }
        } 
      }
      cout<<s1.size()<<" "<<s1<<endl;
      s.clear();
    }

    return 0;
}