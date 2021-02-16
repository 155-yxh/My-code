#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{   
double a,b,c;
while(cin>>a>>b>>c)
{
  if((a-b<=0.001)&&(b-a<=0.001)) a=b;
  if((b-c)<=0.001&&(c-b<=0.001)) b=c;
   if((a-c)<=0.001&&(c-a<=0.001)) a=c;
  if(a==b&&b==c)
  {cout<<"等边三角形"<<endl;}
  else if((a==b||a==c||b==c)&&(((b*b-a*a-c*c<=0.001)&&(b>=a&&b>=c))||((a>=b&&a>=c)&&(a*a-c*c-b*b<=0.001))||((c*c-b*b-a*a<=0.001)&&(c>=a&&c>=b))))
  {cout<<"等腰直角三角形"<<endl;}
  else if(a==b||a==c||b==c)
  {cout<<"等腰三角形"<<endl;}
  else if(((b*b-a*a-c*c<=0.001)&&(b>=a&&b>=c))||((a>=b&&a>=c)&&(a*a-c*c-b*b<=0.001))||((c*c-b*b-a*a<=0.001)&&(c>=a&&c>=b)))
  {cout<<"直角三角形"<<endl;}
  else if((a+b>c)&&(a+c>b)&&(c+b>a))
  {cout<<"一般三角形"<<endl;}
  else cout<<"不是三角形"<<endl;
}
    return 0;
}
