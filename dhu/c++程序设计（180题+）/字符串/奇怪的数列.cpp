#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    string a,b;
    int n;
    cin>>a>>n;
    int as=a.size();
    for(int i=0;i<n;i++)
    {
      as=a.size();
      for(int j=0;j<as;j++)
      {
        int num=1;
        for(int i1=j+1;;i1++)
        {
          if(a[j]==a[i1]) 
          {j++; num++;}
          else break;
        }
        b.push_back(num+'0');
        b.push_back(a[j]);
      }
      a=b;
      b.clear();
    }
    cout<<a;

    return 0;
}