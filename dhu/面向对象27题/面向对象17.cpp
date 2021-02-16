#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class Note
{ 
   int year, month, day, hour, minute, second;
   char *event;  //本题要求event必须为一个字符串指针，不能为字符数组或string字符串
   //以下只说明了两个构造函数，可根据需要自己增加构造函数的重载
public:
   friend bool cmp(Note a,Note b);
   friend class NoteList;
   Note(char * msg, int year1, int month1, int day1, int hour1=0, int minute1=0, int second1=0)
   {
       event=new char[105];
       strcpy(event,msg);
       year=year1;month=month1;day=day1;hour=hour1;minute=minute1;second=second1;
   }
   Note(const Note & note)
   {
      *this=note;
   }
   Note()
   {
       ;
   }
   ~Note()
   {
       ;
   }
   Note &operator=(const Note &a);
   void ShowNote();
//还需要重载等于号，还可根据需要设计ShowNote()方法，用来显示“提醒”的时间和内容
};
void Note::ShowNote()
{
  cout<<setfill('0');
  cout<<year<<'-'<<setw(2)<<month<<'-'<<setw(2)<<day<<" "<<setw(2)<<hour<<':'<<setw(2)<<minute<<':'<<setw(2)<<second<<" ";
  int num=0;
  cout<<event;
  cout<<endl;
}
bool cmp (Note a,Note b)
{
  if(a.year!=b.year) return a.year<b.year;
  if(a.month!=b.month) return a.month<b.month;
  if(a.day!=b.day) return a.day<b.day;
  if(a.hour!=b.hour) return a.hour<b.hour;
  if(a.minute!=b.minute) return a.minute<b.minute;
  return a.second<b.second;
}
class NoteList
{
   private:
    vector <Note> noteArr;
   public:
     void AddNote(Note n);  //插入提醒信息（插入后保持按时间升序排序，如果两个提醒信息时间完全相同，则后插入的排在后）
     Note DeleteFirst();  //删除数组中第0个提醒信息并作为函数值返回（因为是按时间排序，所以第0个肯定是时间最早的一个）
     void PrintAll();  //输出所有提醒信息
     int GetNoteCount();  //获得提醒信息的数量
};
Note &Note::operator=(const Note &a)
{
    if(this==&a) return*this;
    year=a.year;  month=a.month; day=a.day; hour=a.hour; minute=a.minute; second=a.second;
    event=new char[105];
    strcpy(event,a.event);
    return *this;
}
void NoteList::AddNote(Note n)
{
    noteArr.push_back(n);
    sort(noteArr.begin(),noteArr.end(),cmp);
}
Note NoteList::DeleteFirst()
{
    Note a1;
    a1=noteArr[0];
    noteArr.erase(noteArr.begin());
    return a1;
}
int NoteList::GetNoteCount()
{
    return noteArr.size();
}
void NoteList::PrintAll()
{
   for(int i=0;i<noteArr.size();i++)
   {
       noteArr[i].ShowNote();
   }
}
int main()
{
 char eventMsg[100];
 Note n2;
 int year,month,day,hour,minute,second;
 int i,n;
 NoteList notes;
 int op;
    while (cin >> op)
    {
        switch (op)
        {
            case 1:
            {
                cin>>year;
                cin>>month;
                cin>>day;
                cin>>hour;
                cin>>minute;
                cin>>second;
                cin.get();
                cin.getline(eventMsg,90);
                Note nt(eventMsg,year,month,day,hour,minute,second);
                notes.AddNote(nt);
                break;
            }
            case 2:
            {
                if (notes.GetNoteCount()>0)
                {
                    Note nt=notes.DeleteFirst();
                    nt.ShowNote();
                }               
                break;
            }
            case 3:
            {
                int cnt = notes.GetNoteCount();
                cout<<cnt<<" notes:"<<endl;
                notes.PrintAll();
                break;
            }
        }
    }

    return 0;
}
