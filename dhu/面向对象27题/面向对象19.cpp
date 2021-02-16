#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class Circle
{
    friend ostream & operator<<(ostream & os,const Circle &obj);
private:
    double radius,perim,area;
public:
    Circle(double r=0)
    {
        radius=r;
        perim=3.14*2*r;
        area=3.14*r*r;
    }
};
ostream & operator<<(ostream & os,const Circle &obj)
{
    os<<"radius:"<<obj.radius<<";"<<"perim:"<<obj.perim<<";"<<"area:"<<obj.area;
    return os;
}


int main()
{
    double r;
    while(cin>>r)
    {
        if (r>0)
        {
           Circle c1(r);
           cout<<c1<<endl;
        }
        else
        {
           Circle c2;
           cout<<c2<<endl;
        }
    }

    return 0;
}