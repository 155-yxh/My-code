#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main()
{ 
    int line1=0,len=0;
    string s1,s2;
    while(cin>>s1)
    {
      if(s1=="<br>") {
        cout<<endl;
        line1=0;
        len=0;  
        }
      else if(s1=="<hr>")
      {
        if(line1==0){
          for(int i=0;i<80;i++) cout<<'-';
          cout<<endl;
          len=0;
        }
        else{
          cout<<endl;
          for(int i=0;i<80;i++) cout<<'-';
          cout<<endl;
          line1=0;
          len=0;
        } 
      }
      else if(line1+s1.size()+1>80)
      {    
        cout<<endl;
        line1=0;
        len=1;
        line1+=s1.size();
        cout<<s1;
      }
      else{
        if(len) {cout<<" "; line1++;}
        len=1;
        line1+=s1.size();
        cout<<s1;
      }
    }
    cout<<'\n';

    return 0;
}