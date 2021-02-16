#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{  
    int n,i,i1,i2;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
      if(i%2==0)
      {
        for(i1=0;i1<n;i1++)
        {
           a[i][i1]=i*n+i1+1;
        }
      }
      else
      {
         for(i1=n-1;i1>=0;i1--)
        {
           a[i][n-i1-1]=i*n+i1+1;
        }
      }
    }
    for(i=0;i<n;i++)
    {
        for(i1=0;i1<n;i1++)
        {
            cout<<right<<setw(4)<<a[i][i1];
        }
        cout<<endl;
    }

    return 0;
}