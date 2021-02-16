#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{  
  string s1,s2;
  while(cin>>s1>>s2)
  {
    string out1,out2,out3,out4,str1,str2;
    out1=s1+s2;
    out2.clear();
    sort(out1.begin(),out1.end());
	out1.erase(unique(out1.begin(),out1.end()),out1.end());
    str1=s1;
    str2=s2;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    str1.erase(unique(str1.begin(),str1.end()),str1.end());
    str2.erase(unique(str2.begin(),str2.end()),str2.end());
    for(int i=0;i<str1.size();i++){
        for(int i1=0;i1<str2.size();i1++){
            if(str1[i]==str2[i1]) {out2+=str1[i]; break;}
        }
    }
    sort(out2.begin(),out2.end());
    out4="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<26;i++)
    {
      for(int i1=0;i1<out1.size();i1++){
       if(out4[i]==out1[i1]) 
       {
        out4.erase(out4.begin()+i);
        i--;
        break;
       }
      } 
    }
    out3=out1;
    for(int i=0;i<out3.size();i++){
        for(int i1=0;i1<out2.size();i1++){
            if(out3[i]==out2[i1]){
               out3.erase(out3.begin()+i);
               i--;
               break;
            }
        }
    }
    cout<<"in s1 or s2:"<<out1<<endl;
    cout<<"in s1 and s2:"<<out2<<endl;
    cout<<"in s1 but not in s2 ,or in s2 but not in s1:"<<out3<<endl;
    cout<<"not in s1 and s2:"<<out4<<endl<<endl;
  }

    return 0;
}