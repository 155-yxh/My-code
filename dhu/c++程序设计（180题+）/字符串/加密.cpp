#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
  int n,k,i,i1;
  char a[101];
  while(cin.getline(a,101))
  {
    for(i=0;i<100;i++)
    {
      if(a[i]>='0'&&a[i]<='9')
      {
        a[i]=a[i]-'0'+'a';
      }
      else if(a[i]>='a'&&a[i]<='j')
      {
        a[i]=a[i]+'0'-'a';
      }
    }
    for(i=0;i<100;i++)
    {
      if(a[i]=='\0') break;
      cout<<a[i];
    }
    cout<<endl;
  }

  return 0;
}
 