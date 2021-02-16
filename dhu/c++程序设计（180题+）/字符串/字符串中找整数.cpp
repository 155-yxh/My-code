#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{  
    string s;
	while(cin>>s)
	{
	   int i1=0;
	   int n=s.size();
       int a[n]={0};
	   for(int i=0;i<s.size();i++)
	   {
		  if(isdigit(s[i]))
		  {
             a[i1]=a[i1]*10+s[i]-'0';
			 if(i<s.size()-1&&isdigit(s[i+1])==0) i1++;
			 if(i==s.size()-1) i1++;
		  }
	   }
	   if (i1!=0) cout<<i1<<" ";
	   else cout<<i1<<endl;
	   for(int i=0;i<i1;i++){
		   if(i==i1-1) {cout<<a[i]<<endl; break;}
		   cout<<a[i]<<" ";
	   }	
	}

    return 0;
}