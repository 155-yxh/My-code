#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() 
{
   int x;
   cin>>x;
   if(x==1) cout<<"Today, I ate 1 apple.";
   else if(x==0) cout<<"Today, I ate 0 apple.";
   else cout<<"Today, I ate "<<x<<" apples.";
    return 0;
}