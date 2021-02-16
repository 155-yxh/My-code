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
          if(isdigit(s[i])==0||s[i]=='0')
          {
             s.erase(s.begin()+i);
             i--;
          }
       }
       if(s.empty()) cout<<"0"<<endl;
       else{
          double sum=0;
          for(int i=0;i<s.size();i++)
          {
             if(i==s.size()-1) 
             {cout<<"1/"<<s[i]<<"=";sum+=1.0/(s[i]-'0'); break;}
             cout<<"1/"<<s[i]<<"+";
             sum+=1.0/(s[i]-'0');
          }
          cout<<fixed<<setprecision(2)<<sum<<endl;
       }
       s.clear();
    }

    return 0;
}