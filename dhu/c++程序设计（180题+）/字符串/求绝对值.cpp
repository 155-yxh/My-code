#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
  long long b,c,n,i;
  char a[10002];
  while(cin.getline(a,10001))
  {
    if(a[0]=='-')
    {
      for(i=1;i<10000;i++)
      {
        if(a[i]=='\0') break;
        cout<<a[i];
      }
       cout<<endl;
    }
    else cout<<a<<endl;
  }

  return 0;
}