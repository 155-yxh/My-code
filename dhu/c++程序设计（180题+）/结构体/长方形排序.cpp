#include<bits/stdc++.h>
using namespace std;
struct test
{
	int num,l,w;
}t[1005];
bool cmp(test a,test b)
{
   if(a.num!=b.num) return a.num<b.num;
   if(a.l!=b.l) return a.l<b.l;
   return a.w<b.w;
}

int main()
{
	int n;
	cin>>n;
	bool bo=0;
	while(n--)
	{
		if(bo) cout<<endl;
		bo=1;
		int m;
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>t[i].num;
			int a,b;
			cin>>a>>b;
			t[i].l=max(a,b);
			t[i].w=min(a,b);
		}
		sort(t,t+m,cmp);
		cout<<t[0].num<<" "<<t[0].l<<" "<<t[0].w<<endl;
		for(int i=1;i<m;i++)
		{
			if(t[i].num==t[i-1].num&&t[i].l==t[i-1].l&&t[i].w==t[i-1].w) continue;
			cout<<t[i].num<<" "<<t[i].l<<" "<<t[i].w<<endl;
		}
	}

	return 0;
}