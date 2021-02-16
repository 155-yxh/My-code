#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int tt=0,s;
int p[200],t[6],c[200][6];
int dp[6][6][6][6][6],pp[6],nn[6];
int pd(int x)
{
    for (int i=1;i<=tt;i++) if (x==nn[i]) return i;
    tt++;
    nn[tt]=x;
    return tt;
}
int main()
{
	cin>>s;
    int b,i,j;
	int n,cc,k;
    memset(c,0,sizeof(c));
    for (i=1;i<s+1;i++)
    {
        cin>>n;
        for (j=1;j<=n;j++)
        {
            cin>>cc>>k;
            c[i][pd(cc)]=k;
        }
        cin>>p[i];
    }
    cin>>b;
    for(int i=1;i<b+1;i++)
    {
		s++;
        int cc;
        cin>>cc;
		cin>>t[pd(cc)]>>pp[pd(cc)];
		c[s][pd(cc)]=1;
        p[s]=pp[pd(cc)];
    }
    for(int i1=0;i1<=t[1];i1++)
	{
      for(int i2=0;i2<=t[2];i2++)
	  {
        for(int i3=0;i3<=t[3];i3++)
		{
         for(int i4=0;i4<=t[4];i4++)
		 {
           for(int i5=0;i5<=t[5];i5++)
           {
             dp[i1][i2][i3][i4][i5]=i1*pp[1]+i2*pp[2]+i3*pp[3]+i4*pp[4]+i5*pp[5];
             for(int i=1;i<=s;i++)
             {
               int t1=max(i1-c[i][1],0),t2=max(i2-c[i][2],0),t3=max(i3-c[i][3],0),t4=max(i4-c[i][4],0),t5=max(i5-c[i][5],0);
               if(dp[t1][t2][t3][t4][t5]+p[i]<dp[i1][i2][i3][i4][i5])  dp[i1][i2][i3][i4][i5]=dp[t1][t2][t3][t4][t5]+p[i];
             }
            }
		 } 
		}
	  }
    }   
	cout<<dp[t[1]][t[2]][t[3]][t[4]][t[5]]<<endl;

    return 0;
}