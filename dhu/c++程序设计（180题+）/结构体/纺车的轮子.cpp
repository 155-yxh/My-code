#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct test
{
	int v,num,jd[6],length[6];
}t[6];

int main()
{
	int sum[365];
	for(int i=1;i<=5;i++)
	{
		cin>>t[i].v>>t[i].num>>t[i].jd[1]>>t[i].length[1];
		for(int i1=1;i1<t[i].num;i1++)
		{
			cin>>t[i].jd[i1+1]>>t[i].length[i1+1];
		}
	}
	bool bo=1;
	for(int i=0;i<360;i++)//i为时间，i1为轮子，i2为缺口
	{
        memset(sum,0,sizeof(sum));
		for(int i1=1;i1<=5;i1++)
		{
			for(int i2=1;i2<=t[i1].num;i2++)
			{
               for(int d=0;d<=t[i1].length[i2];d++)
			   {
                  int s=(t[i1].jd[i2]+d+t[i1].v*i)%360;
				  sum[s]++;
			   }
			}
		}
		for(int j=0;j<360;j++)
		{
			if(sum[j]==5)
			{cout<<i; bo=0;break;}
		}
		if(bo==0) break;
	}
    if(bo) cout<<"none";
    return 0;
}