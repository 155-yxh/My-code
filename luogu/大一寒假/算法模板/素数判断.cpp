#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);
const int MAX=1e9+7;

bool zs(int n)
{
    if(n<=1) return 0;
    if(n==2||n==3) return 1;
    if(n%6!=1&&n%6!=5) return 0;
    for(int i=5;i*i<=n;i+=6)
    {
       if(n%i==0||n%(i+2)==0) return 0;
    }
    return 1;
}
int main()
{
    cout<<zs(5);
    system("pause");
    return 0;
}