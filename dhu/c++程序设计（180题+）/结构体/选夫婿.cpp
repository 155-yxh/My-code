#include<bits/stdc++.h>
using namespace std;
struct test
{
	string name;
	int h,w;
}t[1005],te[1005];
bool cmp(test a,test b)
{
  if(a.h!=b.h)  return a.h<b.h;
  return a.w<b.w;
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t[i].name>>t[i].h>>t[i].w;
	}
	int hmin,hmax,wmin,wmax;
	cin>>hmin>>hmax>>wmin>>wmax;
	int i1=0;
    for(int i=0;i<n;i++)
	{
	  if(t[i].h>=hmin&&t[i].h<=hmax&&t[i].w<=wmax&&t[i].w>=wmin)
	  {
		te[i1]=t[i];
		i1++;
	  }
	}
	if(i1==0) cout<<"No";
	else{
	  sort(te,te+i1,cmp);
	  i1--;
	  for(int i=0;i<=i1;i++)
	  {
		  cout<<te[i].name<<" "<<te[i].h<<" "<<te[i].w<<endl;
	  }
	}

	return 0;
}