#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main ( )
{
    int n,a;
    vector <int> shu;
    cin>>n;
    for(int i=0;i<n;i++)  
    {
       cin>>a;
       shu.push_back(a);
    }
    sort(shu.begin(),shu.end());
    int num=1;
    for(int i=1;i<shu.size();i++)
    {
        if(shu[i]==shu[i-1]){
            num++;
            if(i==shu.size()-1) cout<<shu[i]<<" "<<num<<endl;
        }
        else{
            cout<<shu[i-1]<<" "<<num<<endl;
            num=1;
            if(i==shu.size()-1) cout<<shu[i]<<" "<<num<<endl;
        }
    }

    return 0;
}