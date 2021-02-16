#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class Point
{
    friend class Rectangle;
    friend class Circle;
private:
    int x,y;
public:
    Point(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    virtual bool isIn(Point &p){};
    virtual double getArea(){};
};
class Rectangle:public Point
{
private:
   int width,height;
public:
   Rectangle(int x, int y, int width1, int height1) :Point(x,y)
   {
      width=width1;
      height=height1;
   }
   double getArea();
   bool isIn(Point &p);
};
double Rectangle::getArea()
{
    return double(width)*height;
}
bool Rectangle::isIn(Point &p)
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
class Circle:public Point
{
private: 
   double r;
public:
   Circle(double x, double y, double r1):Point(x,y)
   {
     r=r1;
   }
   double getArea();
   bool isIn(Point &p);
};
double Circle::getArea()
{
    return r*r*3.14;
}
bool Circle::isIn(Point &p)
{
   double pos;
   pos=(p.x-x)*(p.x-x)+(p.y-y)*(p.y-y);
   pos=sqrt(pos);
   if(pos<r) return 1;
   return 0;
}
int main()
{
   int topLeftX, topLeftY, width, height;
   int px, py;
   int op, radius, count=0;
   Point *ppArr[100];  //声明一个指针数组，最多存放100个Point对象的指针
   double totalArea = 0;
   cin>>px>>py;
   Point p(px, py);
   while (cin >> op)
    {
        switch (op)
        {
            case 1:
            {//往数组里添加元素，指向长方形对象
                 cin>>topLeftX>>topLeftY>>width>>height;
                 ppArr[count++] = new Rectangle(topLeftX, topLeftY, width, height);
                 break;
            }
            case 2:
            {//往数组里添加元素，指向圆形对象
                 cin>>px>>py>>radius;
                 ppArr[count++] = new Circle(px, py, radius);
                 break;
            }
        }
    }
    for(int i=0; i<count; i++)
    {//遍历ppArr数组，判断p位于哪些对象之内，然后计算这些对象的面积之和
        if (ppArr[i]-> isIn(p))
            totalArea += ppArr[i]->getArea();
    }
    cout<<totalArea<<endl; 

    return 0;
}