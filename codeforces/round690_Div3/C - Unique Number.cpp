#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t)
	{
	  t--;
	  int n;
	  cin>>n;
	  if(n<10) 
	  {cout<<n<<endl;continue;}
	  if(n>45) {cout<<-1<<endl;continue;}
	  if(n>=10&&n<18)
	  {cout<<(n-9)<<9<<endl;continue;}
	  if(n>17&&n<25)
	  {cout<<(n-17)<<89<<endl;continue;}
	  if(n>24&&n<31)
	  {cout<<(n-24)<<789<<endl;continue;}
	  if(n>30&&n<36)
	  {cout<<(n-30)<<6789<<endl;continue;}
	  if(n>35&&n<40)
	  {cout<<(n-35)<<56789<<endl;continue;}
	  if(n>39&&n<43)
	  {cout<<(n-39)<<"456789"<<endl;continue;}
	  if(n>42&&n<45)
	  {cout<<(n-42)<<"3456789"<<endl;continue;}
	  if(n==45)
	  {
	   cout<<"123456789"<<endl;
	  }
	}
    
	return 0;
}