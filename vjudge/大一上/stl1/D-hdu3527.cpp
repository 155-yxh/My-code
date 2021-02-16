#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
bool pd (vector<string> a1,string a2)
{
  for(int i=0;i<a1.size();i++)
  {
    if(a1[i]==a2) return 1;
  }
  return 0;
}

int main()
{ 
    int a,b,c;
    string s1;
    while(cin>>a>>b>>c)
    {
      vector <string> st;
      for(int i=0;i<a;i++)
      {
        cin>>s1;
        st.push_back(s1);
      }
      vector <string> str;
      for(int i=0;i<b;i++)
      {
        cin>>s1;
        str.push_back(s1);
      }
      vector <string> str2;
      for(int i=0;i<c;i++)
      {
        cin>>s1;
        str2.push_back(s1);
      }
      vector <string> v;
      for(int i=0;i<str.size();i++)
      {
        if(pd(st,str[i])&&!pd(str2,str[i]))
        v.push_back(str[i]);
      }
      if(v.empty()) cout<<"No enemy spy"<<endl;
      else{
        for(int i=0;i<v.size();i++)
        {
          if(i==v.size()-1) {cout<<v[i]<<endl; break;}
          cout<<v[i]<<" ";
        }
      } 
    }  

    return 0;
}
