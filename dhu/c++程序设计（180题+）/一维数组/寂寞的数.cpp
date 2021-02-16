#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
	cin>>n;
	int a[100005]={0};
	for(int i=1;i<n;i++)
	{
		int num=i;
		int i1=i;
		while(i1!=0)
		{
          num+=i1%10;
		  i1/=10;
		}
		a[num]=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(n==1) break;
		if(a[i]==0) cout<<i<<endl;
	}

    return 0;
}