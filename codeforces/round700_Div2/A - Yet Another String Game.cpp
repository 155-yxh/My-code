#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);
 
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int si=s.size();
      for(int i=0;i<si;i+=2)
      {
         if(s[i]!='a') s[i]='a';
         else s[i]='b';
         if(i+1<si)
         {
            if(s[i+1]!='z')
            s[i+1]='z';
            else s[i+1]='y';
         }
      }
      cout<<s<<endl;
    }
 
    return 0;
}