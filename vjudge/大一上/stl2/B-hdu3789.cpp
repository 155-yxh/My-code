#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct ay{
  double j;
  double jp;
  double num;
  int id;
}a2[1005];
bool cmpj(ay a,ay b)
{
  return a.j>b.j;
}
bool cmpjp(ay a,ay b)
{
  return a.jp>b.jp;
}
bool cmpn1(ay a,ay b)
{
  return a.j/a.num>b.j/b.num;
}
bool cmpn2(ay a,ay b)
{
  return a.jp/a.num>b.jp/b.num;
}
int main()
{
	int m,n;
	while(cin>>n>>m)
	{
		int a1[1005],tt[1005][5];
		for(int i=0;i<n;i++)
		{
		  cin>>a2[i].j>>a2[i].jp>>a2[i].num;
		  a2[i].id=i;
		}
		for(int i=0;i<m;i++)
		{
			cin>>a1[i];
		}
        sort(a2,a2+n,cmpj);
		tt[a2[0].id][1]=1;
		for(int i=1;i<n;i++)
		{
          if(a2[i].j==a2[i-1].j) tt[a2[i].id][1]=tt[a2[i-1].id][1];
		  else tt[a2[i].id][1]=i+1;
		}
		sort(a2,a2+n,cmpjp);
		tt[a2[0].id][2]=1;
		for(int i=1;i<n;i++)
		{
          if(a2[i].jp==a2[i-1].jp) tt[a2[i].id][2]=tt[a2[i-1].id][2];
		  else tt[a2[i].id][2]=i+1;
		}
		sort(a2,a2+n,cmpn1);
		tt[a2[0].id][3]=1;
		for(int i=1;i<n;i++)
		{
          if(a2[i].j/a2[i].num==a2[i-1].j/a2[i-1].num) tt[a2[i].id][3]=tt[a2[i-1].id][3];
		  else tt[a2[i].id][3]=i+1;
		}
		sort(a2,a2+n,cmpn2);
		tt[a2[0].id][4]=1;
		for(int i=1;i<n;i++)
		{
          if(a2[i].jp/a2[i].num==a2[i-1].jp/a2[i-1].num) tt[a2[i].id][4]=tt[a2[i-1].id][4];
		  else tt[a2[i].id][4]=i+1;
		}

		for(int i=0;i<m;i++)
		{
			int mi=n+1;
			int pm=5;
			for(int i1=1;i1<=4;i1++)
			{
				int num=1;
				for(int i2=0;i2<m;i2++)
			    {
					if(i!=i2)
				    {if(tt[a1[i]][i1]>tt[a1[i2]][i1]) num++;}
				}
				if(mi>num){mi=num;pm=i1;}
			}
			cout<<mi<<":"<<pm<<endl;
		}
        cout<<endl;
	}

    return 0;
}
