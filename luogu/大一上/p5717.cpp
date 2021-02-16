#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() 
{
    long long a,b,c,tmp;
    cin>>a>>b>>c;
    if(a<b)
    {
      tmp=a;
      a=b;
      b=tmp;
    }
    if(a<c)
    {
      tmp=a;
      a=c;
      c=tmp;
    }
    if(b<c)
    {
      tmp=b;
      b=c;
      c=tmp;
    }
    if(b+c<=a)
    {
      cout<<"Not triangle"<<endl;
    }
    else if(c!=0)
    {
    
    if(b*b+c*c==a*a) cout<<"Right triangle"<<endl;
    if(b*b+c*c>a*a) cout<<"Acute triangle"<<endl;
    if(b*b+c*c<a*a) cout<<"Obtuse triangle"<<endl;
    
    if(a==b||b==c||a==c) cout<<"Isosceles triangle"<<endl;
    if(a==b&&b==c) cout<<"Equilateral triangle"<<endl;
    
    }

    return 0;
}