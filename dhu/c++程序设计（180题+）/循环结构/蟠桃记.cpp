#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main ()
{
  long long a,b,n=1,i;
  while(cin>>a)
  {
     n=1;
    for(i=a-1;i>0;i--)
    {
      n=2*(n+1);
    }
     cout<<n<<endl;
  }

  return 0;
}