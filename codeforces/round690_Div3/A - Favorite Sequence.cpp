#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int b[1000005];
 
int main()
{
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	int t;
	cin>>t;
	while(t--)
	{
      int n;
	  cin>>n;
	  for(int i=0;i<n;i++)
	  {
		  cin>>a[i];
	  }
	  int i1=0;
	  for(int i=0;i<n/2;i++)
	  {
		  b[i1]=a[i];
		  i1+=2;
	  }
	  int i2=1;
	  if(n%2==0)
	  {
	    for(int i=n-1;i>=n/2;i--)
	    {
		  b[i2]=a[i];
		  i2+=2;
	    }
	  }
	  else
	  {
	    for(int i=n-1;i>n/2;i--)
	    {
		  b[i2]=a[i];
		  i2+=2;
	    }
		b[n-1]=a[n/2];
	  }
       for(int i=0;i<n;i++)
	   {
		   cout<<b[i]<<" ";
	   }
	   cout<<endl;
	}
 
	return 0;
}