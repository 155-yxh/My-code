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
      void Move(int dx, int dy)
      {
         x=x+dx;
         y=y+dy;
      }
};
Point::Point(int a,int b)
{
    x=a;
    y=b;
}
class Rectangle:public Point{
private:
    int width;
    int height;
public:
    Rectangle(int x, int y, int width1, int height1);
    int getArea ();    //获取该图形的面积
    bool isIn(Point p);   //判断传入的点是否在该图形之内（不包括边界），如果在内部返回true，否则返回false
};
Rectangle::Rectangle(int x, int y, int width1, int height1):Point(x,y)
{
  width=width1;
  height=height1;
}
int Rectangle::getArea ()
{
    return width*height;
}
bool Rectangle::isIn(Point p)
{
  if((x+width)<=p.x||(p.x<=x))
  {
    return 0;
  }
  if((y+height)<=p.y||(p.y<=y))
  {
    return 0;
  }
  return 1;
}

int main()
{
    int topLeftX, topLeftY, width, height;
    int px, py, dx, dy;
    cin>>topLeftX>>topLeftY>>width>>height;
    cin>>px>>py;
    cin>>dx>>dy;
    Point p(px, py);
    Rectangle r(topLeftX, topLeftY, width, height);
    cout<<r.getArea()<<endl;
    if(r.isIn(p))
        cout<<"In"<<endl;
    else
        cout<<"Not in"<<endl;
    r.Move(dx,dy);
    if(r.isIn(p))
        cout<<"In"<<endl;
    else
        cout<<"Not in"<<endl;      
    return 0;
}
