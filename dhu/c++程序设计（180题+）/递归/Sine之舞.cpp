#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
void an(int n,int i)
{
     if(i==n) cout<<"sin("<<i<<")";
     else if(i%2==0)
     {
        cout<<"sin("<<i<<"-";
        an(n,i+1);
        cout<<")";
     }
     else
     {
        cout<<"sin("<<i<<"+";
        an(n,i+1);
        cout<<")";
     }
}
void sn(int n,int i)
{
     if(n==1) 
     {an(n,1); cout<<"+"<<i;}
     else
     {
          cout<<"("; sn(n-1,i+1); cout<<")";
          an(n,1);
          cout<<"+"<<i;
     } 
}
int main ( )
{
     int n;
     cin>>n;
     sn(n,1);
     cout<<endl;

     return 0;
}