#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() 
{
    double a,b,c,p,s;
    cin>>a>>b>>c;
    p=0.5*(a+b+c);
    s=p*(p-a)*(p-b)*(p-c);
    s=sqrt(s);
    cout<<fixed<<setprecision(1)<<s;
    return 0;
}