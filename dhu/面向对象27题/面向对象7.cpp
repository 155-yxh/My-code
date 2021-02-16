#include<bits/stdc++.h>
using namespace std;
class  Student{
        private:
          int num;  //学号
          double score; //分数
        public:  
           Student(int n=0)
           {
               num=n;
           }
           void SetScore(double a);
           inline int GetNum()
           {
               return num;
           }
          inline double GetScore()
          {
              return score;
          } 
          
      };
void Student::SetScore(double a)
{
  score=a;
}
bool cmp(Student a,Student b)
{
    double a1=a.GetScore();
    double b1=b.GetScore();
    return a1>b1;
}
void max( Student arr[] ,int n)
{
    stable_sort(arr,arr+n,cmp);
    int i=0;
    while(1)
    {
      if(arr[i].GetScore()==arr[i+1].GetScore())
      i++;
      else {i++; break;}
    }
    for(int i1=0;i1<i;i1++)
    {
        cout<<arr[i1].GetNum()<<" "<<arr[i1].GetScore()<<endl;
    }
}
int main()
{
	int i, n, num;
    double score;
    cin>>n;
    Student stu[n];
    for(i=0; i<n; i++)
    {
        cin>>num>>score;
        stu[i] ={Student(num)};
        stu[i].SetScore(score);
    }
    max(stu, n );

	return 0;
}