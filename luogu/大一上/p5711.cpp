#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() 
{
   int a,year;
   cin>>year;
   a=(year%4==0&&year%100!=0)||year%400==0;
   if(a==1) cout<<1;
   else cout<<0;
    return 0;
}