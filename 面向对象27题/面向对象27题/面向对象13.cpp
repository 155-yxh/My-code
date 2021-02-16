#include<bits/stdc++.h>
using namespace std;
class Student{
   friend void sort(Student st[], int n);//友元函数，对st按总评成绩进行从大到小排序
   friend bool cmp(Student a,Student b);
   public:
      void init(char *name1, int nor1, int ex1, int fin1); // 用参数name1,nor1,exp1,fin1分别初始化数据成员name，norm, ex, final
      void fun( ); //计算学生的总评成绩。
      void print( ); //输出该学生信息。
   private:   
      int norm, ex, final;
      double overall; //分别表示学生的平时成绩、实验成绩、期末考试和总评成绩 
      char name[15]; //学生姓名    

};
void Student::init(char *name1, int nor1, int ex1, int fin1)
{
   for(int i=0;i<15;i++)
   {
     name[i]=*name1;
     name1++;
   }
   norm=nor1;
   ex=ex1;
   final=fin1;
}
void Student::fun( )
{
  if(final<50) overall=final;
  else overall=0.2*norm+0.25*ex+0.55*final;
}
void Student::print( )
{
  cout<<name<<" "<<norm<<" "<<ex<<" "<<final<<" "<<fixed<<setprecision(0)<<overall<<endl;
}
bool cmp(Student a,Student b)
{
  return a.overall>b.overall;
}
void sort(Student st[], int n)
{
  sort(st,st+n,cmp);
}
int main()
{
  int n;
  int norm, ex, final;
  char name[15];
  cin>>n;
  Student stu[n];
  for(int i=0; i<n; i++ )
  {
    cin>>name>>norm>>ex>>final;   
    stu[i].init(name,norm,ex,final);   
    stu[i].fun(); 
  }
  sort(stu,n); 
  for(int i=0;i<n; i++)
  {   
    stu[i].print();  
  }   
	return 0;
}