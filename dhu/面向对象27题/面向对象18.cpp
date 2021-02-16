#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class WordCount{
    public:
      string s;
      int num=1;
};
string ToLower(string s)
{
    string s1;
    int a=s.size();
    for(int i=0;i<a;i++)
    {
        s[i]=tolower(s[i]);
        s1.push_back(s[i]);
    }
    return s1;
}
bool cmp(WordCount a,WordCount b)
{
    return a.num>b.num;
}
void DisplayResult(vector <WordCount> &a)
{
    stable_sort(a.begin(),a.end(),cmp);
    cout<<a[0].s<<" "<<a[0].num<<endl;
    for(int i=1;i<a.size();i++)
    {
        if(a[i].num==a[0].num) cout<<a[i].s<<" "<<a[i].num<<endl;
        else break;
    }
}
void CountWord(vector <WordCount> &a,string str)
{
   int si=a.size();
   bool bo=1;
   for(int i=0;i<si;i++)
   {
        if(a[i].s==str) 
        {
           a[i].num++;
           bo=0;
        }     
   }
  if(bo)
  {
     WordCount a1;
     a1.s=str;
     a.push_back(a1);
  }
}
int main()
{
    vector <WordCount> vwc;
    string str;
    int i;
    while(cin>>str)
    {
        str = ToLower(str);
        CountWord(vwc, str);
    }
    DisplayResult(vwc);
    return 0;
}
