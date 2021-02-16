#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n;
        int num=1;
        cin>>w>>h>>n;
        while(w%2!=1)
        {
            w=w/2;
            num*=2;
        }
        while(h%2!=1)
        {
            h=h/2;
            num*=2;
        }
        if(num>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}