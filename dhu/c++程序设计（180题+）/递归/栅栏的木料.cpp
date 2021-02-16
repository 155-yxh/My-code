#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int n,m,mid;
int sum[1025],leng[1025],t[55],temp[55],need[1025];
int serch1(int cnt,int i,int tempsum);
int cmp2(const void *a, const void *b)
{
	return (*(int*)a)-(*(int*)b);
}

int cmp1(const void *a, const void *b)
{
	return (*(int*)b)-(*(int*)a);
}
int main()
{
	int i;
	cin>>n;
	for(i=1;i<=n;i++)
	{cin>>t[i];}
	cin>>m;
	for(i=1;i<=m;i++)
	{cin>>leng[i];}
	qsort(&t[1], n, sizeof(int), cmp1);
	qsort(&leng[1], m, sizeof(int), cmp2);
	while(t[n]<leng[1]&&n)  n--;
	while(leng[m]>t[1]&&m)  m--;
	for(i=1;i<=n;i++)
    {
		sum[i]=sum[i-1]+t[i];
    }
	for(i=1;i<=m;i++)
    {
		need[i]=need[i-1]+leng[i];
    }
	int l=0,r=m+1;
	while (l<r-1)
	{
		for (i=1;i<=n;i++)
        {
			temp[i]=t[i];
        }
		mid=(l+r)/2;
		if (serch1(mid,1,0)) l=mid;
		else r=mid;
	}
	cout<<l<<endl;

	return 0;
}
int serch1(int cnt,int i,int tempsum)
{
	if(!cnt)  return 1;
	if(tempsum>sum[n]-need[mid])  return 0;
	int j;
    if (leng[cnt]==leng[cnt-1]) j=i;
    else j= 1;
	for (;j<=n;j++)
	{
		if (leng[cnt]<=temp[j])
		{
			temp[j]=temp[j]-leng[cnt];
			if (temp[j]<leng[1])  tempsum=tempsum+temp[j];
			if (serch1(cnt-1, j, tempsum))  return 1;
			if (temp[j]<leng[1])  tempsum=tempsum-temp[j];
			temp[j]=temp[j]+leng[cnt];
		}
	}
	return 0;
}
