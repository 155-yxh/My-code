#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() 
{
    int a,b,max,sum,i,n=1;
    cin>>a>>b;
    sum=a+b;
    max=sum;
   
    for(i=2;i<=7;i++)
    {
      cin>>a>>b;
      sum=a+b;
      if(max<sum)
      {
        max=sum;
        n=i;
      }
    }
    if(max<=8) cout<<0;
    else cout<<n;
    return 0;
}