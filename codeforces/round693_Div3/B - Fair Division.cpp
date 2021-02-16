#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        vector <int> num1,num2;
        long long sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
           cin>>a;
           if(a==1) num1.push_back(a);
           else num2.push_back(a);
        }
        if(num2.size()%2==0)
        {
            if(num1.size()%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            if(num1.size()>=2&&num1.size()%2==0)  cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
 
    return 0;
}