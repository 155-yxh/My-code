#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool cmp (int a,int b)
{
    return a>b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector <int> arr;
        long long n,a,alice=0,bob=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end(),cmp);
       for(int i=0;i<n;i=i+2)
       {
           if(arr[i]%2==0) alice+=arr[i];
       }
       for(int i=1;i<n;i=i+2)
       {
           if(arr[i]%2==1) bob+=arr[i];
       }
       if(alice>bob) cout<<"Alice"<<endl;
       else if(bob>alice) cout<<"Bob"<<endl;
       else cout<<"Tie"<<endl;
    }
 
    return 0;
}