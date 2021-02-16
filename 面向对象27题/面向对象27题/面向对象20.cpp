#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class Point
{
  private:
       int x,y;
  public:
        Point(int a,int b);
        void getx(int a);
        void gety(int a);
        inline int returnx()
        {
          return x;
        }
        inline int returny()
        {
          return y;
        }
};
void Point::getx(int a)
{
    x=a;
}
void Point::gety(int a)
{
    y=a;
}
Point::Point(int a,int b)
{
    x=a;
    y=b;
}
class Rectangle
{
private:
    Point topLeft;
    int width,height;
public:
    Rectangle(int x,int y,int width,int height);
    int getArea() ;   //获取该图形的面积
    bool isIn(Point p);   //判断传入的点是否在该图形之内（不包括边界），如果在内部返回true，否则返回false
};
Rectangle::Rectangle(int x,int y,int width1,int height1):topLeft(x,y)
{ 
  width=width1;
  height=height1;
}
int Rectangle::getArea()
{
  return width*height;
}
bool Rectangle::isIn(Point p)
{
  if((topLeft.returnx()+width)<=p.returnx()||(p.returnx()<=topLeft.returnx()))
  {
    return 0;
  }
  if((topLeft.returny()+height)<=p.returny()||(p.returny()<=topLeft.returny()))
  {
    return 0;
  }
  return 1;
}
int main()
{
    int topLeftX, topLeftY, width, height;
    int px, py;
    cin>>topLeftX>>topLeftY>>width>>height;
    cin>>px>>py;
    Point p(px, py);
    Rectangle r(topLeftX, topLeftY, width, height);
    cout<<r.getArea()<<endl;
    if(r.isIn(p))
        cout<<"In"<<endl;
    else
        cout<<"Not in"<<endl;
    return 0;
}

