#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    
    vector <string> str,str2,cp;
    string s,tmp,s2,tmp2;
    getline(cin,s);
    getline(cin,s2);
    int pos=0;
    while(pos!=-1)
    {
       pos=s.find(' ');
       tmp=s.substr(0,pos);
       str.push_back(tmp);
       cp.push_back(tmp);
       s.erase(s.begin(),s.begin()+pos+1);
    }
    pos=0;
    while(pos!=-1)
    {
       pos=s2.find(' ');
       tmp=s2.substr(0,pos);
       int a=tmp.size();
       sort(tmp.begin(),tmp.begin()+a);
       str2.push_back(tmp);
       s2.erase(s2.begin(),s2.begin()+pos+1);
    }
    int cps=cp.size(),str2s=str2.size();
    for(int i=0;i<cps;i++)
    {
      sort(cp[i].begin(),cp[i].end());
    }
    bool bo=0;
    for(int i=0;i<cps;i++)
    {
      for(int i1=0;i1<str2s;i1++)
      {
         if(cp[i]==str2[i1]) 
         {
            if(bo) cout<<" ";
            cout<<str[i]; bo=1; break;
         }
      }
    }

    return 0;
}