#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
  long long a,b,n,i;
  while(cin>>a)
  {
     if(a==0) break;
     n=0;
     while(a>2)
     {
       if(a>=9)
       {
        a=a-9;
        n+=4;
        a++;
       }
       else if(a>=3)
       {
        a-=3;
        n++;
        a++;
       }
     }
     if(a==2)
      n++;
     cout<<n<<endl;
  }

  return 0;
}
