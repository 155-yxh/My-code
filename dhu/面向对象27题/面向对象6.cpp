#include<bits/stdc++.h>
using namespace std;
class student{
  public:
     string name;
     int math;
     int english;
     int sum;
     student(string a="",int b=0,int c=0)
     {
        name=a;
        math=b;
        english=c;
     }
     inline int calcTotal()
     {
         sum=math+english;
     }
     inline string getName()
     {
         return name;
     }
     inline int getMath()
     {
         return math;
     }
     inline int getEnglish()
     {
         return english;
     }
     inline int getTotal()
     {
         return sum;
     }   
};
bool cmp(student a1,student a2)
    {
      return a1.sum>a2.sum;
    }
void  sortStudent(student s[],int s1)
{
    bool cmp(student a1,student a2);
    stable_sort(s,s+3,cmp);
}
int main()
{
	student s[3],temp;
    string sName;
    int sMath, sEnglish;
    int i;
    for(i=0; i<3; i++)
    {
        cin>>sName>>sMath>>sEnglish;
        s[i]=student(sName, sMath, sEnglish);
        s[i].calcTotal();
    }
    sortStudent(s,3);
    for(i=0;i<3;i++)
    {
        cout<<s[i].getName()<<" "<<s[i].getMath()<<" "<<s[i].getEnglish()<<" "<<s[i].getTotal()<<endl;
    }
	return 0;
}