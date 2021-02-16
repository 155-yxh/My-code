#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class Point
{
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
    int num;
    Point topLeft;
    int width,height;
  public:
    Rectangle(int num, int x, int y, int width, int height);
    Rectangle();
    int getArea();
    inline int getnum()
    {
       return num;
    }
    inline bool isIn(Point p)
    {
      if(p.returnx()>topLeft.returnx()&&p.returnx()<topLeft.returnx()+width&&p.returny()>topLeft.returny()&&p.returny()<topLeft.returny()+height)
      {return 1;}
      return 0;
    }
};
int Rectangle::getArea()
{
  int a=width*height;
  return a;
}
Rectangle::Rectangle()
{
  ;
}
Rectangle::Rectangle(int num1, int x1, int y1, int width1, int height1)
{
  num=num1;
  topLeft.getx(x1);
  topLeft.gety(y1);
  width=width1;
  height=height1;
}
class RectangleCollection
{
    private:
      Rectangle rects[100];
      int count=0;
    public:
      void addRectangle(Rectangle r);
      void deleteRectangle(int num1) ;
      int inRects(Point p);
};
void RectangleCollection::addRectangle(Rectangle r)
{
  rects[count]=r;
  count++;
}
void RectangleCollection::deleteRectangle(int num1)
{
	for(int i=0;i<count;i++)
	{
		if(rects[i].getnum()==num1)
		{
			for(int i1=i+1;i1<count;i1++)
			{
        rects[i1-1]=rects[i1];
      }
			count--;
			break;
		}
	}
}
int RectangleCollection::inRects(Point p)
{
  long long sum=0;
  for(int i=0;i<count;i++)
  {
     if(rects[i].isIn(p))
     {
       sum+=rects[i].getArea();
     }
  }
  return sum;
}
int main()
{
    int num, topLeftX, topLeftY, width, height;
    int px, py;
    int op;
    RectangleCollection rc;
    Rectangle r;
    Point p;
    while (cin >> op)
    {
        switch (op)
        {
            case 1:
                cin >> num >> topLeftX >> topLeftY >> width >> height;
                r =Rectangle(num, topLeftX, topLeftY, width, height);
                rc.addRectangle(r);
                break;
            case 2:
                cin >> num;
                rc.deleteRectangle(num);
                break;
            case 3:
                cin >> px >> py;
                p=Point(px, py);
                cout << rc.inRects(p) << endl;
                break;
        }
    }
    return 0;
}