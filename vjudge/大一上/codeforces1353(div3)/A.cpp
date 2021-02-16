#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main()
{ 
    int t,n,m;
    cin>>t;
    while (t--)
    {
      cin>>n>>m;
      if(n==1) 
      {
        cout<<0<<endl;
        continue;
      }
      else if(n==2)
      {
        cout<<m<<endl;
        continue;
      }
      else cout<<m*2<<endl;
    }

    return 0;
}