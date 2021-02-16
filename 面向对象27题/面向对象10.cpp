#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class Date{
     int year;
     int month;
     int day; 
   public:
     Date(int y,int m,int d):year(y),month(m),day(d){};  
     int getYear() const {return year;}
     int getMonth() const {return month;}
     int getDay() const {return day;}   
};
bool pd(int a)
{
  if(a%400==0) return 1;
  if(a%4==0&&a%100!=0) return 1;
  return 0;
}
int CalDay(const Date &d1, const Date &d2) //d1:较小的日期赋给d1，d2:较大的日期
{
  int t1,t2,da1,da2,m1,m2,y1,y2;
  int time,feb;
  y1=d1.getYear();
  if(pd(y1)) feb=29;
  else feb=28;
  da1=d1.getDay();m1=d1.getMonth();
  switch(m1)
  {
    case 1:t1=feb+337-da1;break;
    case 2:t1=feb+337-(da1+31);break;
    case 3:t1=feb+337-(da1+31+feb);break;
    case 4:t1=feb+337-(da1+62+feb);break;
    case 5:t1=feb+337-(da1+92+feb);break;
    case 6:t1=feb+337-(da1+123+feb);break;
    case 7:t1=feb+337-(da1+153+feb);break;
    case 8:t1=feb+337-(da1+184+feb);break;
    case 9:t1=feb+337-(da1+215+feb);break;
    case 10:t1=feb+337-(da1+245+feb);break;
    case 11:t1=feb+337-(da1+276+feb);break;
    case 12:t1=feb+337-(da1+306+feb);break;
  }
  t1++;
  y2=d2.getYear();
  if(pd(y2)) feb=29;
  else feb=28;
  da2=d2.getDay();m2=d2.getMonth();
  switch(m2)
  {
    case 1:t2=da2;break;
    case 2:t2=da2+31;break;
    case 3:t2=da2+31+feb;break;
    case 4:t2=da2+62+feb;break;
    case 5:t2=da2+92+feb;break;
    case 6:t2=da2+123+feb;break;
    case 7:t2=da2+153+feb;break;
    case 8:t2=da2+184+feb;break;
    case 9:t2=da2+215+feb;break;
    case 10:t2=da2+245+feb;break;
    case 11:t2=da2+276+feb;break;
    case 12:t2=da2+306+feb;break;
  }
  if(y2>y1)
  {
    time=t1+t2-2;
    for(int i=y1+1;i<y2;i++)
    {
      int ye;
      if(pd(i)) ye=366;
      else ye=365;
      time+=ye;
    }
    time++;
    return time;
  }
  else if(y2==y1) time=t1+t2-1-feb-337; 
  return time;
}
int main()
{    
    int y1,m1,d1,y2,m2,d2;
    cin>>y1>>m1>>d1;
    cin>>y2>>m2>>d2;
    Date date1(y1,m1,d1);  
    Date date2(y2,m2,d2);     
    cout<<CalDay(date1,date2);
    return 0;
}