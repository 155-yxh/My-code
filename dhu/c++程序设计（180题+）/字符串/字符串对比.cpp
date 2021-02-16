#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size()) cout<<1;
    else if(a==b) cout<<2;
    else{
      for(int i=0;i<a.size();i++)
      {
          a[i]=toupper(a[i]);
          b[i]=toupper(b[i]);
      }
      if(a==b) cout<<3;
      else cout<<4;
    }

    return 0;
}