#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   int a[10]={0,1,2,3,4,5,6,7,8,9};
   cin>>n;
   n--;
   while(n--)
   {
      next_permutation(a,a+10);
   }
   for(int i=0;i<10;i++)
   {
      cout<<a[i];
   }

	return 0;
}