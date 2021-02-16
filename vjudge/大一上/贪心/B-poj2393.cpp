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
    int n,s;
    cin>>n>>s;
    long long sum=0;
    int c[10005],y[10005];
    for(int i=0;i<n;i++)
    {
      cin>>c[i]>>y[i];
    }
    for(int i=1;i<n;i++)
    {
        c[i]=min(c[i],c[i-1]+s);
    }
    for(int i=0;i<n;i++)
    {
        sum+=c[i]*y[i];
    }
    cout<<sum;

    return 0;
}