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
  {cout<<"�ȱ�������"<<endl;}
  else if((a==b||a==c||b==c)&&(((b*b-a*a-c*c<=0.001)&&(b>=a&&b>=c))||((a>=b&&a>=c)&&(a*a-c*c-b*b<=0.001))||((c*c-b*b-a*a<=0.001)&&(c>=a&&c>=b))))
  {cout<<"����ֱ��������"<<endl;}
  else if(a==b||a==c||b==c)
  {cout<<"����������"<<endl;}
  else if(((b*b-a*a-c*c<=0.001)&&(b>=a&&b>=c))||((a>=b&&a>=c)&&(a*a-c*c-b*b<=0.001))||((c*c-b*b-a*a<=0.001)&&(c>=a&&c>=b)))
  {cout<<"ֱ��������"<<endl;}
  else if((a+b>c)&&(a+c>b)&&(c+b>a))
  {cout<<"һ��������"<<endl;}
  else cout<<"����������"<<endl;
}
    return 0;
}
