#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
const double PI=3.14;
class Shape
{
public:
    Shape() {}
    ~Shape() {}
    virtual double GetPerim()=0;
};
class Circle:public Shape
{
public:
   Circle(double r1)
   {
     r=r1;
   }
   double r;
   double GetPerim()
   {
     return PI*2*r;
   }
};
class Rectangle:public Shape
{
public:
   Rectangle(double a,double b)
   {
     width=a;
     height=b;
   }
   double width,height;
   double GetPerim()
   {
     return (width+height)*2;
   }
};
int main()
{
    Shape * sp;
    double r,width,height;
    cin>>r;
    sp=new Circle(r);
    cout<<sp->GetPerim ()<<endl;
    cin>>width>>height;
    sp=new Rectangle(width,height);
    cout<<sp->GetPerim()<<endl;   
    return 0;
}