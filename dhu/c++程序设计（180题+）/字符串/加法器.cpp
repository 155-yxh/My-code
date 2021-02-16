#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    string t;
    while (cin>>t)
    {
      int tmp=0;
      int sum=0;
      for(int i=0;i<t.size();i++)
      {
        if(isdigit(t[i])) tmp=tmp*10+t[i]-'0';
        else {
          sum+=tmp; 
          tmp=0;
          }
      }
      sum+=tmp;
      cout<<sum<<endl;
    }
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}