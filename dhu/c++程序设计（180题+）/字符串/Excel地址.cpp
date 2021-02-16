#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    string s;
    int y=0;
    while(n)
    {
      y=n%26;
      if(y==0)
      y=26;
      n=(n-y)/26;
      s.push_back(y+'A'-1);
    }
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}