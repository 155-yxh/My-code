#include<bits/stdc++.h>
using namespace std;
struct test
{
	string name;
	int c,j,y;
}t[105];
bool cmp(test a,test b)
{
  int sum1=a.c+a.j+a.y;
  int sum2=b.c+b.j+b.y;
  if(sum1!=sum2) return a.c+a.j+a.y>b.c+b.j+b.y;
  if(a.c!=b.c)  return a.c>b.c;
  return a.j>b.j;
}

int main()
{
	int n;
	bool bo=1;
	while(cin>>n)
	{
	  if(bo==0) cout<<endl;
	  bo=0;
      for(int i=0;i<n;i++)
	  {
		  cin>>t[i].name>>t[i].c>>t[i].j>>t[i].y;
	  }
	  sort(t,t+n,cmp);
	  for(int i=0;i<n;i++)
	  {
		  cout<<t[i].name<<" "<<t[i].c+t[i].j+t[i].y<<" "<<t[i].c<<" "<<t[i].j<<" "<<t[i].y<<endl;
	  }
	}

	return 0;
}