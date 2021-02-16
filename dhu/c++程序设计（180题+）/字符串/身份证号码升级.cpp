#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    string s,tmp,year;
    char a;
    year="19";
    cin>>s;
    s.insert(6,year);
    tmp=s;
    int sum=0;
    sum=(tmp[0]-'0')*7+(tmp[1]-'0')*9+(tmp[2]-'0')*10+(tmp[3]-'0')*5+(tmp[4]-'0')*8+(tmp[5]-'0')*4+(tmp[6]-'0')*2+(tmp[7]-'0')*1+(tmp[8]-'0')*6+(tmp[9]-'0')*3+(tmp[10]-'0')*7+(tmp[11]-'0')*9+(tmp[12]-'0')*10+(tmp[13]-'0')*5+(tmp[14]-'0')*8+(tmp[15]-'0')*4+(tmp[16]-'0')*2;
    sum%=11;
    switch (sum)
    {
      case 0: a='1';break;
      case 1: a='0';break;
      case 2: a='x';break;
      case 3: a='9';break;
      case 4: a='8';break;
      case 5: a='7';break;
      case 6: a='6';break;
      case 7: a='5';break;
      case 8: a='4';break;
      case 9: a='3';break;
      case 10: a='2';break;
    }
    s.push_back(a);
    cout<<s;
    return 0;
}