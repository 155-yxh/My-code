#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class MyString
{ 
  private:
       string s;
  public:
      static int Count;
      MyString(const MyString & note)
      {
        s=note.s;
        Count++;
      }
      MyString(unsigned n,char c)
      {
        for(int i=0;i<n;i++)
        {
          s.push_back(c);
        }
        Count++;
      }
      MyString ()
      {
        Count++;
      }
      ~MyString ()
      {
        Count--;
      }
      MyString(char *p)
      {
        while(*p!='\0')
         {s+=*p; p++;}
         Count++;
      }
      static int GetCount()
      {
         return Count;
      }
      void ShowStr();
};
void MyString::ShowStr()
{
  cout<<s;
}
int MyString::Count=0;
void fun1(int n)
{
    MyString strArr[n];
    MyString *pStr;
    cout<<strArr[0].GetCount()<<endl;
}
void fun2(int n)
{
    MyString *pStr=new MyString[n];
    cout<<MyString::GetCount()<<endl;
}
void fun3(MyString &s1, MyString s2)
{
    MyString s3;
    s3=s1=s2;
    cout<<MyString::GetCount()<<endl;
    s3.ShowStr();
    cout<<endl;
}
int main()
{
   MyString s1;
   MyString s2;
    int n;
    char charArr[20];
    int op;
    while (cin >> op)
    {
        switch (op)
        {
            case 1:
            {
                cin>>n;
                fun1(n);
                break;
            }
            case 2:
            {
                cin>>n;
                fun2(n);
                break;
            }
            case 3:
            {
                int m;
                char ch;
                cin>>m>>ch;
                s2=MyString(m,ch);
                fun3(s1,s2);
                s1.ShowStr();
                cout<<endl;
                break;
            }
            case 4:
            {      
                cin >> charArr;
                s1=MyString(charArr);
                cout<<MyString::GetCount()<<endl;  
                s1.ShowStr();       
                cout<<endl;                           
                break;
            }
        }
    }
    system("pause");
    return 0;
}