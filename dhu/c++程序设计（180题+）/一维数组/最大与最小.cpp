#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
 int in=1;
  int n,m;
  while(cin>>n>>m)
  {
	if(in!=1) cout<<endl;
	in++;
	vector <int> ci;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        ci.push_back(a);
    }
    int sum=0;
    int ma=-100000;
	int mi=1000000;
    for(int i=0;i<n;i++)
    {
        for(int i1=i;i1<m+i;i1++)
        {
            if(i1>=ci.size()) sum+=ci[i1-n];
            else sum+=ci[i1];
        }
        ma=max(ma,sum);
		mi=min(mi,sum);
        sum=0;
    }
    cout<<"Max="<<ma<<endl;
	cout<<"Min="<<mi<<endl;
  }

    return 0;
}