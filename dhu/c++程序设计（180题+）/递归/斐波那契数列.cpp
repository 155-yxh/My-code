#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
long long num=0;
int change(int n)
{
    num++;
    if(n==0) return 0;
    if(n==1) return 1;
    return change(n-1)+change(n-2);
}
int main ( )
{
     int n;
     cin>>n;
     int a=change(n);
     cout<<a<<" "<<num<<endl;

     return 0;
}