#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{ 
    map <string,int> mp;
    string s;
    int num=0;
    while(cin>>s)
    {
       mp[s]++;
    }
    cout<<mp.size();
    return 0;
}