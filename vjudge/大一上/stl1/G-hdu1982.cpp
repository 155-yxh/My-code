#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main()
{ 
    string s1,s2,tmp;
    int n,m,i;
    cin>>m;
    getchar();
    while(m--)
    {
      getline(cin,s1);
      for(i=0;i<s1.size();i++)
      {
        int sum=0;
        if(s1[i]=='-') continue;
        else if(s1[i]>='0'&&s1[i]<='9')
        {
          if(i+1<s1.size()&&s1[i+1]>='0'&&s1[i+1]<='9'){
            tmp=((s1[i]-'0')*10+s1[i+1]-'0')+'A'-1;
            i++;
            s2+=tmp;
          }
          else{
            tmp=s1[i]-'0'+'A'-1;
            s2+=tmp;
          }
        }
        else if(s1[i]=='#' ) {s2+=' ';}
      }
      cout<<s2<<endl;
      s2.clear();
    }

    return 0;
}
