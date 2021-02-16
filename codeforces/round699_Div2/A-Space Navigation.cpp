#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      int x,y,r=0,l=0,u=0,d=0;
      string s;
      cin>>x>>y;
      cin>>s;
      for(int i=0;i<s.size();i++)
      {
        if(s[i]=='R') r++;
        else if(s[i]=='U') u++;
        else if(s[i]=='L') l--;
        else if(s[i]=='D') d--;
      }
      if((x>=l&&x<=0)||(x>=0&&x<=r)) 
      {
        if((y>=d&&y<=0)||(y>=0&&y<=u)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      }
      else cout<<"NO"<<endl;
    }
    system("pause");
    return 0;
}