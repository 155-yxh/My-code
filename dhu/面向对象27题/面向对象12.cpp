#include<bits/stdc++.h>
using namespace std;
class Student{ 
   public:
      void Set_StuNum(int a); 
      int Get_StudNum();  
      void Set_Score(double a); 
      double Get_Score();  
      friend void Score_Trans(Student &s);
   private:   
      int stu_num; 
      double score;    

};
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
void Score_Trans(Student &s)
{
  if(s.Get_Score()>=90) cout<<s.Get_StudNum()<<" "<<"优";
  else if(s.Get_Score()>=80) cout<<s.Get_StudNum()<<" "<<"良";
  else if(s.Get_Score()>=70) cout<<s.Get_StudNum()<<" "<<"中";
  else if(s.Get_Score()>=60) cout<<s.Get_StudNum()<<" "<<"及格";
  else cout<<s.Get_StudNum()<<" "<<"不及格";
}
int main()
{
  int n, i, stu_num, max_stu_num;
  double score, max_score;
  cin>>n;
  Student stu[n];
  for( i=0; i<n; i++ )
  {
    cin>>stu_num>>score; 
    stu[i].Set_StuNum(stu_num);
    stu[i].Set_Score(score);
  }
  for( i=0; i<n; i++ )
  {
    Score_Trans(stu[i]);
    if(i<n-1) cout<<endl;
  }
	return 0;
}