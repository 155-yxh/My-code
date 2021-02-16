#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{  
    int m,i;
    string s1,s2;
    while (cin>>s1)
    {
      if(s1[0]=='e'&&s1[1]=='n'&&s1[2]=='d') break;
      s2=s1;
      bool a=1;
      int a1=0,a2=0,a3=0;
      for(i=0;i<s1.size();i++)
      {
          if((i<(s1.size()-1))&&(s1[i]==s1[i+1])&&(s1[i]!='e')&&(s1[i]!='o'))
          {
            cout<<"<"<<s2<<"> "<<"is not acceptable."<<endl;
            a=0;
            break;
          }
          if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
          {
            a1++;
            s1[i]='a';
          }
          else s1[i]='b';
          if((i>1)&&(s1[i]==s1[i-1])&&(s1[i]==s1[i-2]))
          {
            cout<<"<"<<s2<<"> "<<"is not acceptable."<<endl;
            a=0;
            break;
          }
      }
      if(a1==0&&a==1) {a=0;cout<<"<"<<s2<<"> "<<"is not acceptable."<<endl;}
      if(a) cout<<"<"<<s2<<"> "<<"is acceptable."<<endl;
    }

    return 0;
}