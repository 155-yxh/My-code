#include<bits/stdc++.h>
using namespace std;
class  Student{
        private:
          int num;
          double chinese, math; 
        public:
            double ave;
            string name;  
           Student(int n=0,string s="")
           {
               num=n;
               name=s;
           }
           inline double getMath()
           {
               return math;
           }
           inline double getChinese()
           {
              return chinese;
           }
           inline int getnum()
           {
              return num;
           }
           inline void setChinese(double a)
           {
              if(a>100||a<0) chinese=0;
              else chinese=a;
           }
           inline void setMath(double a)
           {
              if(a>100||a<0) math=0;
              else math=a;
           }
           inline double calcAverage()
           {
              return (chinese+math)/2.0;
           }        
};
void findStudent(Student s[],int n,string ser)
{
   bool bo=0;
   for(int i=0;i<n;i++)
   {
       string s1=s[i].name;
       int pos=s1.find(ser);
       if(pos==-1) {continue;}
       cout<<s[i].getnum()<<" "<<s[i].name<<" "<<s[i].getChinese()<<" "<<s[i].getMath()<<" "<<s[i].calcAverage()<<endl;
       bo=1;
   }
   if(bo==0) cout<<"Not found."<<endl;
}
int main()
{
  int n,i;
  int number;
  string name, searchName;
  double math,chinese;
  cin>>n;
  Student stu[n];
  for(i=0;i<n;i++)
  {
    cin>>number>>name>>chinese>>math;
    stu[i] = Student(number, name);
    stu[i].setChinese(chinese);
    stu[i].setMath(math);
  }
    cin>>searchName;  
    findStudent(stu, n, searchName);  
 
	return 0;
}