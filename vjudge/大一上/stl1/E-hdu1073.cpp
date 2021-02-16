#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main()
{  
    int m,num,i;
    cin>>m;
    getchar();
    while(m--)
    {
      string s1,s2,s3;
      while(getline(cin,s2))
      {
        if(s2=="END") break;
        s1=s1+s2+'\n';
      }
      while(getline(cin,s2))
      {
        if(s2=="END") break;
        s3+=s2+'\n';
      }
      if(s3==s1) {cout<<"Accepted"<<endl; }
      else {//去除空格换行这里开始
        for(auto &a:s1)
        {
          int dl=s1.find(" ");
          if(dl>=0)
          s1.erase(s1.begin()+dl);
          int dl1=s1.find('\n');
          if(dl1>=0)
          s1.erase(s1.begin()+dl1);
          int dl2=s1.find('\t');
          if(dl2>=0)
          s1.erase(s1.begin()+dl2);
        }
        for(auto &a:s3)
        {
          int d=s3.find(" ");
          if(d>=0)
          s3.erase(s3.begin()+d);
          int d1=s3.find('\n');
          if(d1>=0)
          s3.erase(s3.begin()+d1);
          int d2=s3.find('\t');
          if(d2>=0)
          s3.erase(s3.begin()+d2);
        }
          if(s1==s3) cout<<"Presentation Error"<<endl;
          else cout<<"Wrong Answer"<<endl;
        }
    }  

    return 0;
}
