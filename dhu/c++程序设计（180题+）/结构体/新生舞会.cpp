#include<bits/stdc++.h>
using namespace std;
struct test
{
	string name;
	string num;
	char sex;
}t[1005];


int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	  cin>>t[i].name>>t[i].num>>t[i].sex;
	}
	int m;
	cin>>m;
	string a1,a2;
	char c1='!',c2='!';
	for(int i=0;i<m;i++)
	{
       cin>>a1>>a2;
	   for(int i1=0;i1<n;i1++)
	   {
		   if(a1==t[i1].name||a1==t[i1].num) c1=t[i1].sex;
		   if(a2==t[i1].name||a2==t[i1].num) c2=t[i1].sex;
		   if(c1!='!'&&c2!='!') break;
	   }
	   if(c1==c2) cout<<"N"<<endl;
	   else cout<<"Y"<<endl;
	   c1='!';c2='!';
	}

	return 0;
}