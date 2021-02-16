#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() 
{
    unsigned long long m,t,s,a;
    double b;
    cin>>m>>t>>s;
    if(s>(m-1)*t)
    {
      cout<<0;
    }
    else if(m==0||t==0) cout<<0;
    else if(s==0) cout<<m;
    else
    {
      a=s/t;
      b=s/1.0/t;
      if(a==b)
      cout<<m-a;
      else
     cout<<m-a-1;

    }

    return 0;
}