#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool hw (long long n)
{
   long long i,m=0;
   i=n;
    while(i>0)
    {
        m=m*10+i%10;
        i/=10;
    }
    return m==n;
}
long long change(long long n)
{
  long long m=0,tmp=0;
  for(int i=1;;i=i*10)
  {
      m+=(n%2)*i;
      n/=2;
      if(n<=0) break;
  }
  return m;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n;
    while(cin>>n)
    {
        if(hw(n))
        {
          long long m=change(n);
          if(hw(m))
          {
            cout<<"Yes"<<endl;
          }
          else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}