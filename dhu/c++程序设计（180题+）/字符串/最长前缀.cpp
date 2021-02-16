#include<bits/stdc++.h>
using namespace std;
const int MAX=1e6+7;
int dp[MAX];
vector <string> str;
string s1,s;
bool check(int a,const string &ss)
{
	if(s.size()-a<ss.size())
	{return 0;}
	for(int i=0;i<ss.size();i++)
	{
		if(s[a]!=ss[i]) return 0;
		a++;
	}
	return 1;
}

int main()
{
	while(cin>>s1&&s1[0]!='.')
	{str.push_back(s1);}
	s.clear();
	while(cin>>s1)
	{
		s+=s1;
	}
	int pn=str.size();
	int sl=s.size();
	for(int i=0;i<pn;i++)
	{
		if(check(0,str[i]))
		{
			dp[str[i].size()]=1;
		}
	}
	for(int i=0;i<sl;i++)
	{
		if(dp[i])
		{
			for(int i1=0;i1<pn;i1++)
			{
				if(check(i,str[i1])) dp[str[i1].size()+i]=1;
			}
		}
	}
	int num=0;
	for(int i=sl;i>=0;i--)
	{
		if(dp[i])
		{
			num=i;
			break;
		}
	}
	cout<<num<<endl;

	return 0;
}