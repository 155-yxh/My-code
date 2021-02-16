#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int jump(int k,int n)
{
   if(k==0||k==n) return 1;
   return jump(k,n-1)+jump(k-1,n-1);
}
int main ( )
{
     int n,k;
     cin>>k>>n;
     cout<<jump(k,n);
     return 0;
}