#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() 
{
    int a,b,i,n,num,money,tem;
    cin>>n;
    cin>>a>>b;
      num=n/a;
      if(n%a!=0)
      {
        ++num;
      }
      money=b*num;
      tem=money;
    for(i=2;i<=3;i++)
    {
      cin>>a>>b;
      num=n/a;
      if(n%a!=0)
      {
        ++num;
      }
      money=b*num;
      if(money<tem)
      {tem=money;}
    }
    cout<<tem;
    return 0;
}