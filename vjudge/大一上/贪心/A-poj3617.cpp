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
    int n;
    cin>>n;
    string s;
    string a,b;
    for(int i=0;i<n;i++)
    {
       cin>>s;
       a+=s;
    }
    for(int i=0;i<n;i++)
    {
        int si=a.size();
        char c=min(a[0],a[si-1]);
        b+=c;
        if(a[0]<a[si-1]) {a.erase(a.begin()); }
        else if(a[0]>a[si-1]) {a.erase(a.end()-1); }
        else{
          int i1=1;
          while(1)
          {
             if(a[i1]>a[si-1-i1]) 
             {a.erase(a.end()-1); break;}
             else if(a[i1]<a[si-1-i1]) 
             {a.erase(a.begin()); break;}
             if((i1==si-1-i1)||(i1+1==si-1-i1))
             {a.erase(a.end()-1);  break;}
             i1++;
          }
       }
    }
    for(int i=0;i<b.size();i++)
    {
       if(i!=0&&i%80==0) cout<<endl;
       cout<<b[i];
    }

    return 0;
}
