#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class employee
{
    friend class boss;
    friend class salesman;
    friend class intern;
private:
    string name;
    string role;
    double salary;
public:
   employee(string name1, string role1)
   {
      name=name1;
      role=role1;
   }
   virtual void calcSalary() {;}
   double getSalary()
    {
        return salary;
    }
   void showInformation()
   {
       cout<<name<<" "<<role<<" "<<salary<<endl;
   }
};
class boss:public employee
{
public:
   boss(string n):employee(n,"boss")
   {
     ;
   }
   void calcSalary()
   {
      salary=5000;
   }
};
class salesman:public employee
{
public:
   int money;
   salesman(string n,int a):employee(n,"salesman")
   {
       money=a;
   }
   void calcSalary()
   {
       salary=2000+0.1*money;
   }
};
class intern:public employee
{
public:
   int hour;
   intern(string n,int a):employee(n,"intern")
   {
       hour=a;
   }
   void calcSalary()
   {
       salary=hour*30;
   }
};


int main()
{
    vector<employee *> empList;
    int op, salesCount, workHours;
    string name;
    while (cin >> op)
     {
        switch (op)
        {
            case 1:
            {
                cin>>name;
                employee *pe = new boss(name);
                empList.push_back(pe);
                break;
            }
            case 2:
            {
                cin>>name>>salesCount;
                employee *pe=new salesman(name, salesCount);
                empList.push_back(pe);
                break;
            }
            case 3:
            {
                cin>>name>>workHours;
                employee *pe=new intern(name, workHours);
                empList.push_back(pe);
                break;
            }
        }
     }
    double totalSalary = 0;
    for(int i=0; i<empList.size(); i++)
    {
        empList.at(i)->calcSalary();//先利用各派生类的多态性计算出工资
        totalSalary += empList.at(i)->getSalary();
        empList.at(i)->showInformation();
    }
    cout<<"total salary:"<<totalSalary<<endl;

    return 0;
}