#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() 
{
    unsigned long long n,c;
    cin>>n;
    c=n*(n-1)/2*(n-2)/3*(n-3)/4;
    
    cout<<c;

    return 0;
}