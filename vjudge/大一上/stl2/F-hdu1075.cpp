#include <bits/stdc++.h>

using namespace std; 
map <string, string> mars;
  
int main()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string a,b;
    cin>>a;
    while(cin>>a)
    {
        if(a=="END") break;
        cin>>b;
        mars[b]=a;
    }
    cin>>a;
    cin.get();
    b.clear();
    while(1)
    {
      getline(cin,a);
      if(a=="END") break;
      for(int i=0;i<a.size();i++)
      {
          if(islower(a[i])) b+=a[i];
          else 
          {
           if(mars.find(b)!=mars.end()) cout<<mars[b];
           else cout<<b;
           b.clear();
           cout<<a[i];
          }
      }
      cout<<endl;
    }

    return 0;	
}  
