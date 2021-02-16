#include <bits/stdc++.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <list>
#include <set>
#include <map>
using namespace std;
int main()
{
    int m,n,i,i1,i2,a1,a2,a3,a4;
    int jz[20][20];
    while(cin>>m>>n)
    {
      for(i=0;i<m;i++){
        for(i1=0;i1<n;i1++){
          cin>>jz[i][i1];
        }
      }
      for(i=0;i<m;i++){
        a1=0;
        for(i1=0;i1<n;i1++){
          if(jz[i][i1])
          {
            a1=1;
            a2=i+1;
            a3=i1+1;
            a4=jz[i][i1];
            cout<<a2<<" "<<a3<<" "<<a4;
          }
        }
        if(i==m-1) break;
        if(a1==0)  continue;
        cout<<endl;
      }
      cout<<endl<<endl;
    }

    return 0;
}