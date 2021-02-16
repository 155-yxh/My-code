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
int a3[1000005];
int a[10005];
int main ( )
{
    int n;
    while(cin>>n)
    {
        memset(a3,0,sizeof(a3));
        if(n==0) break;
        int k=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            a3[a[i]]++;
            k=max(k,a3[a[i]]);
        }
        sort(a,a+n);
        cout<<k<<endl;
        for(int i=0;i<k;i++)
        {
            cout<<a[i];
            for(int i1=i+k;i1<n;i1=i1+k)
            {
                cout<<" "<<a[i1];
            }
            cout<<endl;
        }
    }

    return 0;
}
