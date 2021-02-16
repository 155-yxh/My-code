#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    vector <string> s1;
    vector <int> count1;
    string s2;
    bool bo;
    while(cin>>s2)
    {
      bo=1;
      for(int i=0;i<s2.size();i++){
        s2[i]=tolower(s2[i]);
      }
      for(int i=0;i<s1.size();i++)
      {
          if(s2==s1[i])
          {
            count1[i]++;
            bo=0;
            break;
          }
      }
      if(bo==1)
      {
        s1.push_back(s2); 
        count1.push_back(1);
      }
    }
    string name; int num=0;
    for(int i=0;i<s1.size();i++)
    {
       if(count1[i]>num) name=s1[i];
       num=max(num,count1[i]);
    }
    cout<<name<<" "<<num;

    return 0;
}