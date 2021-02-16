#include<vector>
#include <iostream>
using namespace std;

int main()
{  
    vector <int> circle;
    int m,n;
    while(cin>>n>>m)
    {
      circle.clear();
      int located=0,i;
      for(i=0;i<=2*n-1;i++)
      {
        circle.push_back(i);
      }
      for(i=0;i<=n-1;i++)
      {
        located=(located+m-1)%circle.size();
        circle.erase(circle.begin()+located);
      }
      int good=0;
      for(i=0;i<=2*n-1;i++)
      {
        if(i%50==0&&i!=0) cout<<endl; 
        if(good<circle.size()&&i==circle[good])
        {
            good++;
            cout<<"G";
        }
        else cout<<"B";
      }
      cout<<endl<<endl;
    }

    return 0;
}