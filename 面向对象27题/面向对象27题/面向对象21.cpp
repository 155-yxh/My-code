#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class Date
{
    friend class StudentList;
private:
    int year,month,day;
    static int maxYear,minYear;
public:
    static void SetMaxYear(int maxY)
    {
      maxYear = maxY;
    }
    static void SetMinYear(int minY)
    {
      minYear = minY;
    }
    Date()
    {
      ;
    }
    Date(int y,int m,int d);
};
Date::Date(int y,int m,int d)
{
    year=y;
    month=m;
    day=d;
}
int Date::maxYear=0;
int Date::minYear=0;

class Student 
{
    friend class StudentList;
private:
    int num;
    string name;
    Date birthday;
public:
    Student()
    {
      ;
    }
    Student(int num1, string name1, Date birthday1);
};
Student::Student(int num1, string name1, Date birthday1)
{
    num=num1;
    name=name1;
    birthday=birthday1;
}
class StudentList {
private:
    Student st[100];
    int numb=0;
public:
    void AddStudent(Student stu);
    void DeleteStudent(int num);
    StudentList GetStudent(int year1, int year2);
    void Print();
};
void StudentList::AddStudent(Student stu)
{
    if(stu.birthday.year>Date::maxYear) {stu.birthday.year=Date::maxYear;}
    if(stu.birthday.year<Date::minYear) {stu.birthday.year=Date::minYear;}
    st[numb]=stu;
    numb++;
}
void StudentList::DeleteStudent(int num1)
{
    int pos=numb;
    for(int i=0;i<numb;i++)
    {
        if(st[i].num==num1)
        {
            pos=i;
            break;
        } 
    }
    if(pos!=numb)
    {
        for(int i=pos;i<numb-1;i++)
        {
            st[i]=st[i+1];
        }
        numb--;
    }
}
StudentList StudentList::GetStudent(int year1, int year2)
{
    StudentList list1;
    for(int i=0;i<numb;i++)
    {
        if(st[i].birthday.year>=year1&&st[i].birthday.year<=year2)
        list1.AddStudent(st[i]);
    }
    return list1;
}
void StudentList::Print()
{
   for(int i=0;i<numb;i++)
   {
       cout<<st[i].num<<" "<<st[i].name<<" "<<st[i].birthday.year<<" "<<st[i].birthday.month<<" "<<st[i].birthday.day<<endl;
   }
   if(numb==0) cout<<"No result."<<endl;
}

int main()
{
   int num, birthYear, birthMonth, birthDay;
   int maxYear, minYear, year1, year2;
   int op;
   string name;
   StudentList sl;
   Student stu;
   cin >> maxYear >> minYear;
   Date::SetMaxYear(maxYear);
   Date::SetMinYear(minYear);
   while (cin >> op)
   {
        switch (op)
        {
            case 1:
                cin >> num >> name >> birthYear >> birthMonth >> birthDay;
                stu = Student(num, name, Date(birthYear, birthMonth, birthDay));
                sl.AddStudent(stu);
                break;
            case 2:
                cin >> num;
                sl.DeleteStudent(num);
                break;
            case 3:
                cin >> year1 >> year2;
                StudentList temp = sl.GetStudent(year1, year2);
                temp.Print();
                break;
       }
   }
    return 0;
}