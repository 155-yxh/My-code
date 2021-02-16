
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <list>
#include <set>
#include <map>
#include <queue>
using namespace std;

 int main()
{
    int n,r;
    while(cin>>r>>n)
    {
        if(r==n&&r==-1) break;
        int a[1005];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long sum=0;
        int i=0;
        while(i<n)
        {
          int l,p;
          l=a[i];
          i++;
          while(i<n&&l+r>=a[i]) i++;
          p=a[i-1];
          while(i<n&&p+r>=a[i]) i++;
          sum++;
        }
        cout<<sum<<endl;
    }


    return 0;
}
