#include<bits/stdc++.h>
using namespace std;
template <class T>
T distance( T x1, T y1, T x2, T y2)
{
   T length=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
   return length;
}

int main()
{
	int i_x1, i_y1, i_x2, i_y2;
   double d_x1, d_y1, d_x2, d_y2;
   cin>>i_x1>>i_y1>>i_x2>>i_y2;
   cin>>d_x1>>d_y1>>d_x2>>d_y2;
   cout<<distance( i_x1, i_y1, i_x2, i_y2 )<<endl;
   cout<<distance(d_x1, d_y1, d_x2, d_y2 )<<endl;
 
	return 0;
}