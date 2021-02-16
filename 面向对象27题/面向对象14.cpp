#include<bits/stdc++.h>
using namespace std;
bool pd(char a)
{
  if((a-'0')%2==0) return 0;
  return 1;
}
int sti(string a)
{
   int out=0;
   int si=a.size();
   for(int i=0;i<si;i++)
   {
     out=a[0]-'0'+out*10;
     a.erase(a.begin());
   }
   return out;
}
class ID{
   friend bool pd(char a);
   public:
      void set_ID(char * s); //用参数s初始化成员id（需申请动态内存），并将year,month,date初始化为0
      void fun( );  //根据身份证号计算持证人的出生年月和性别，并判断其是否为青年，并将获得的信息存储到对应的数据成员中
      void print( ); //输出持证人的信息
      ~ID(); //析构函数，进行必要的操作
   private:   
      char *id; //保存18位身份证号
      int year, month, date; //y,m,d分别表示持证人的出生年、月、日
      char sex; //持证人的性别（”M”或”F”） M代表男性，F代表女性
      char youth; 
};
void ID::print( )
{
    cout<<id<<endl;
    cout<<year<<'.'<<month<<'.'<<date<<endl;
    cout<<sex<<endl;
    cout<<youth<<endl;
}
void ID::set_ID(char * s)
{
  id=new char [25];
  strcpy(id,s);
  year=0;
  month=0;
  date=0;
}
void ID::fun( )
{
   string str,y1,m1,d1;
   int y2,m2,d2;
   str=id;
   y1=str.substr(6,4);
   m1=str.substr(10,2);
   d1=str.substr(12,2);
   if(pd(str[16])) sex='M';
   else sex='F';
   y2=sti(y1);
   m2=sti(m1);
   d2=sti(d1);
   year=y2;
   month=m2;
   date=d2;
   if(sex=='M')
   {
      if(y2>1980) youth='Y';
      else if(y2==1980)
      {
        if(m2<10) youth='N';
        else youth='Y';
      }
      else youth='N';
   }
   else if(sex=='F')
   {
      if(y2>1975) youth='Y';
      else if(y2==1975)
      {
        if(m2<10) youth='N';
        else youth='Y';
      }
      else youth='N';
   }
}
ID::~ID()
{
    delete [] id;
}
int main()
{
   int T, i;
   char id[19];
   cin>>T;
   ID person[T];
   for(i=0; i<T; i++)
   {
      if(i>0&&i<T) cout<<endl;
      cin>>id;
      person[i].set_ID(id);
      person[i].fun();
      person[i].print();
   }  
	return 0;
}
