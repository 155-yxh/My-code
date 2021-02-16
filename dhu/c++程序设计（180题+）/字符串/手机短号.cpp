#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
  int n,k,i,i1,k2;
  cin>>k;cin.get();
  int a[11],b[6];
  char a1[12];
  while(k)
  {
    cin.getline(a1,12);
    for(i=0;i<11;i++)
    {
      a[i]=a1[i]-48;
    }
    b[0]=6;n=1;
    for(i=6;i<=10;i++)
    {
      b[n]=a[i];
      n++;
    }
    for(i=0;i<6;i++)
    {
      cout<<b[i];
    }
    cout<<endl;
    k--;
  }

  return 0;
}
 