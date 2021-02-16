#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class Point
{
    friend class Rectangle;
  private:
       int x,y;
  public:
        Point(int a,int b);
        Point();
        void getx(int a);
        inline int returnx()
        {
          return x;
        }
        inline int returny()
        {
          return y;
        }
        void gety(int a);
};
void Point::getx(int a)
{
    x=a;
}
void Point::gety(int a)
{
    y=a;
}
Point::Point()
{
  ;
}
Point::Point(int a,int b)
{
    x=a;
    y=b;
}
class Rectangle
{
  private:
    bool isRectangle(Point topLeft1, Point topRight1, Point bottomLeft1, Point bottomRight1);  //判断4个顶点构成的图形是不是长方形，是则返回true，否则返回false。
    Point topLeft,topRight,bottomLeft,bottomRight;
  public:
    Rectangle(Point topLeft1, Point topRight1, Point bottomLeft1, Point bottomRight1);
    int getArea() ;   //如果是长方形则返回长方形的面积，否则返回0
    bool isIn(Point p);   //如果是长方形则判断传入的点是否在该图形之内（不包括边界），如果在内部返回true，不在内部则返回false。如果不是长方形，则一律返回false。
};
Rectangle::Rectangle(Point topLeft1, Point topRight1, Point bottomLeft1, Point bottomRight1)
{
  topLeft.x=topLeft1.x; topLeft.y=topLeft1.y; 
  topRight.x=topRight1.x; topRight.y=topRight1.y;
  bottomLeft.x=bottomLeft1.x; bottomLeft.y=bottomLeft1.y;
  bottomRight.x=bottomRight1.x; bottomRight.y=bottomRight1.y;
}
bool Rectangle::isIn(Point p)
{
    bool a;
    a=isRectangle(topLeft,topRight,bottomLeft,bottomRight);
    if(a==0) return a;
    if(p.x<=topLeft.x||p.y<=topLeft.y) return 0;
    if(p.x>=bottomRight.x||p.y>=bottomRight.y) return 0;
    return 1;
}
int Rectangle::getArea()
{
    int s;
    bool a=isRectangle(topLeft,topRight,bottomLeft,bottomRight);
    if(a==0) return 0;
    s=(bottomLeft.y-topLeft.y)*(topRight.x-topLeft.x);
    return s;
}
bool Rectangle::isRectangle(Point topLeft1, Point topRight1, Point bottomLeft1, Point bottomRight1)
{
    if(topLeft1.returnx()!=bottomLeft1.returnx())  return 0;
    if(topLeft1.returny()!=topRight1.returny())  return 0;
    if(bottomRight1.returnx()!=topRight1.returnx())  return 0;
    if(bottomRight1.returny()!=bottomLeft1.returny())  return 0;
    return 1;
}

int main()
{
   int topLeftX, topLeftY, topRightX, topRightY, bottomLeftX, bottomLeftY, bottomRightX, bottomRightY;
   int px, py;
   cin >> topLeftX >> topLeftY >> topRightX >> topRightY >> bottomLeftX >> bottomLeftY >> bottomRightX >> bottomRightY;
   cin >> px >> py;
   Point p(px, py);
   Rectangle r(Point(topLeftX, topLeftY), Point(topRightX, topRightY), Point(bottomLeftX, bottomLeftY), Point(bottomRightX, bottomRightY));
   cout << r.getArea() << endl;
   if(r.isIn(p))
        cout << "In" << endl;
   else
        cout << "Not in" << endl;

    return 0;
}
