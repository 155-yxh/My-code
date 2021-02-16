#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int l[1005],r[1005],b[1005],t[1005],c[1005];
int color,n;
int sum[3010];
void calc(int L,int R,int B,int T,int now)
{
    while(now<=n&&(R<l[now]||L>r[now]||B>t[now]||T<b[now])) ++now;
    if(now>n) 
	{
		sum[color]+=(R-L)*(T-B);
	    return; 
	}
    if(L<l[now]) 
	{
		calc(L,l[now],B,T,now+1); 
		L=l[now]; 
	}
    if(R>r[now]) 
	{
		calc(r[now],R,B,T,now+1); 
		R=r[now]; 
	}
    if(B<b[now]) calc(L,R,B,b[now],now+1);
    if(T>t[now]) calc(L,R,t[now],T,now+1);
}
 
int main()
{
	cin>>r[0]>>t[0]>>n;
    c[0]=1;
    for(int i=1;i<=n;i++)
	{
	   cin>>l[i]>>b[i]>>r[i]>>t[i]>>c[i];
	}
    for(int i=n;i>=0;i--)
    {
        color=c[i];
        calc(l[i],r[i],b[i],t[i],i+1);
    }
    for(int i=1;i<=2500;++i)
	{
     if(sum[i])
	 {cout<<i<<" "<<sum[i]<<endl;}
	}
    return 0;
}