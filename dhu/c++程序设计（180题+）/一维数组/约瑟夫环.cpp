#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main ( )
{
    int n,x;
    while(cin>>n>>x)
    {
       vector <int> circle,out;
       for(int i=0;i<n;i++)
       {
         circle.push_back(i);
       }
       int pos=(x-1)%circle.size();
       while(circle.size()>1)
       {
           out.push_back(circle[pos]);
           circle.erase(circle.begin()+pos);
           pos=(pos+x-1)%circle.size();
       }
       for(int i=0;i<out.size();i++)
       {
           cout<<out[i]+1<<" ";
       }
       cout<<circle[0]+1<<endl;
    }

    return 0;
}