#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{  
    int m,i;
    cin>>m;
    while (m)
    {
      int num=1;
      string s1,s2;
      cin>>s1;
      for(i=0;i<s1.size();i++)
      {
        if(s1[i]==s1[i+1])
        num++;
        else if(num>1){
        cout<<num<<s1[i];
        num=1; 
        }
        else if(num<=1){
        cout<<s1[i];
        num=1; 
        }
      }
      cout<<endl;
      m--;
    }
    return 0;
}
