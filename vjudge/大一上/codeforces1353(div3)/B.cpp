
#include <ctype.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <list>
#include <set>
#include <map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      int n,k;
      cin>>n>>k;
      int a[n],b[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      for(int i=0;i<n;i++)
      {
        cin>>b[i];
      }
      sort(a,a+n);
      sort(b,b+n);
      for(int i=0;i<k;i++)
      {
        a[i]=max(a[i],b[n-1-i]);
      }
      int sum=0;
      for(int i=0;i<n;i++)
      {
        sum+=a[i];
      }
      cout<<sum<<endl;
    }
    return 0;
}
