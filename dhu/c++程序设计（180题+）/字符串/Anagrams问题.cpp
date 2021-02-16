#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int as=a.size();
    int bs=b.size();
    if(as!=bs) cout<<'N';
    else
    {
      for(int i=0;i<as;i++)
      {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
      }
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      if(a==b) cout<<'Y';
      else cout<<'N';
    }

    return 0;
}