#include<bits/stdc++.h>
using namespace std;
class Student{ 
   public:
      void Set_StuNum(int a); //自行设计
      int Get_StudNum();  //自行设计
      void Set_Score(double a); //自行设计
      double Get_Score();  //自行设计
   private:   
      int stu_num; //学号
      double score; //分数   
};
bool cmp (Student a, Student b)
{
   return a.Get_Score()>b.Get_Score();
}
int Student::Get_StudNum()
{
  return stu_num;
}
double Student::Get_Score()
{
  return score;
}
void Student::Set_StuNum(int a)
{
  stu_num=a;
}
void Student::Set_Score(double a)
{
  score=a;
}
void max(Student *st, int n, int & maxnum, double &maxsco)
{
  sort(st,st+n,cmp);
  maxnum=st[0].Get_StudNum();
  maxsco=st[0].Get_Score();
}
int main()
{
  int n, stu_num, max_stu_num;
  double score, max_score;
  cin>>n;
  Student stu[n];
  for( int i = 0; i < n; i++ )
  {
    cin>>stu_num>>score; 
    stu[i].Set_StuNum(stu_num);
    stu[i].Set_Score(score);
  }
  max(stu, n, max_stu_num, max_score);
  cout<<max_stu_num<<" "<<max_score;

	return 0;
}