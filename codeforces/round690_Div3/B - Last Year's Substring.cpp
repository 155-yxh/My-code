#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	  string s,s1;
      int n;
	  cin>>n;
	  cin.get();
	  getline(cin,s);
	  if(s=="2020") {cout<<"YES"<<endl; continue;}
	  if(n<4) {cout<<"NO"<<endl; continue;}
	  if(s[0]=='2'&&s[n-1]=='0'&&s[n-2]=='2'&&s[n-3]=='0') 
	  {cout<<"YES"<<endl; continue;}
	  if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0')
	  {cout<<"YES"<<endl; continue;}
	  if(s[0]=='2'&&s[1]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
	  {cout<<"YES"<<endl; continue;}
	  if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[n-1]=='0')
	  {cout<<"YES"<<endl; continue;}
	  if(s[n-4]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
	  {cout<<"YES"<<endl; continue;}
          cout<<"NO"<<endl;
	}
 
	return 0;
}