#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
  int b,c,n,i;
  char a[10002];
  cin>>b; cin.get();
  while(cin.getline(a,10001))
  {
    i=strlen(a);
    for(n=i-1;n>=0;n--)
    {
      cout<<a[n];
    }
    cout<<endl;
    b--;
    if(b==0) break;
  }

  return 0;
}