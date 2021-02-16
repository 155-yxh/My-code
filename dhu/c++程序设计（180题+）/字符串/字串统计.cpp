#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{ 
  struct test
{
    int num=0;
    string str;
}tt[10005];
    int l,max1=0,numb=0,k=0;
    string s;
    string tmp;
    cin>>l>>s;
    int max=0;
    for(int i=l;i<=s.size();i++)
    {
      for(int i1=0;i1<=s.size()-i;i1++)
      {
          tmp=s.substr(i1,i);
          while(k<numb)
          {
            if(tt[k].str==tmp)
            {
              tt[k].num++;
              break;
            }
            else k++;
          }
          if(numb==k)
          {
            tt[numb].str=tmp;
            tt[numb].num++;
            numb++;
          }
          k=0;
      }
    }
      for(int i=0;i<numb;i++)
      {
        if(tt[i].num>=max)
        {
          if(tt[i].num>max||tt[i].str.size()>tmp.size())
          {
            max=tt[i].num;
            tmp=tt[i].str;
          }
        }
      }
    cout<<tmp<<endl;
    return 0;
}