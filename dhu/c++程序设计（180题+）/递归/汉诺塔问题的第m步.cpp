#include<bits/stdc++.h>
using namespace std;
vector <string> str;
void move1(int n,char a,char b,char c)
{
   if(n==1) 
   {
      string s,ss;
      ss="--";
      s.push_back(a);s=s+ss;s.push_back(c);
      str.push_back(s);
   }
   else
   {
      move1(n-1,a,c,b);
      string s,ss;
      ss="--";
      s.push_back(a);s=s+ss;s.push_back(c);
      str.push_back(s);
      move1(n-1,b,a,c);
   }
}
int main()
{
   int n,m;
   while(cin>>n>>m)
   {
      str.clear();
      move1(n,'A','B','C');
      if(m>str.size()||m<=0) cout<<"none"<<endl;
      else cout<<str[m-1]<<endl;
   }

	return 0;
}
