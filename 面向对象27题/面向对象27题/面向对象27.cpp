#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
template <class T>
class cmp
{
public:
  T a,b;
  cmp(T a1,T b1)
  {
      a=a1;
      b=b1;
  }
  T bj()
  {
      T m;
      if(a>b) m=a;
      else m=b;
      return m;
  }
};

int main()
{
    char ch;
    while(cin>>ch)
    {
      if(ch=='e') break;
      else
      {
         if(ch=='i')
         {
             int x,y;
             cin>>x>>y;
             cmp <int> cmp1(x,y);
             cout<<cmp1.bj()<<endl;
         }
         else if(ch=='f')
         {
             double x,y;
             cin>>x>>y;
             cmp <double> cmp1(x,y);
             cout<<cmp1.bj()<<endl;
         }
         else if(ch=='s')
         {
             string x,y;
             cin>>x>>y;
             cmp <string> cmp1(x,y);
             cout<<cmp1.bj()<<endl;
         }
      }
    }
    return 0;
}