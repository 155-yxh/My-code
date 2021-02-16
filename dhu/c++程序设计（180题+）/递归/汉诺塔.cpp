#include<bits/stdc++.h>
using namespace std;
void move1(int n,char a,char b,char c)
{
   if(n==1) cout<<a<<"----"<<c<<endl;
   else
   {
      move1(n-1,a,c,b);
      cout<<a<<"----"<<c<<endl;
      move1(n-1,b,a,c);
   }
}
int main()
{
   int n;
   bool bo=0;
   while(cin>>n)
   {
      if(bo) cout<<endl;
      bo=1;
      move1(n,'A','B','C');
   }

	return 0;
}