#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int a,n,i,num,l1,l2,l3;
    while(cin>>n)
    {
      num=0;
      for(l1=1;l1<n/3;l1++)
      {
        for(l2=l1+1;l2<n/2;l2++)
        {
          l3=n-l1-l2;
          if(l3>l2&&l1+l2>l3)
          num++;
        }
      }
      cout<<num<<endl;
    }

    return 0;
}