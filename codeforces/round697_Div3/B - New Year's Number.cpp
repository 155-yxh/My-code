#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);
bool pd(int n)
{
   int num=n/2020;
   if(num==0) return 0;
   for(int i=num*2020;i<=num*2021;i++)
   {
       if(i==n) return 1;
   }
   return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      if(pd(n)) cout<<"YES"<<endl;
      else  cout<<"NO"<<endl;
    }
    return 0;
}