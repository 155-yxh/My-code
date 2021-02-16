#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    string s,s1;
  while(getline(cin,s))
  {
    int pos=s.find(" ");
    while(pos!=-1)
    {
        s.erase(s.begin()+pos);
        pos=s.find(" ");
    }
    int a=s.size();
    int sum=0,tmp=0;
    for(int i=0;i<a;i++)
    {
        if(s[i]=='+')
        {
            for(int i1=i+1;i1<a;i1++)
            {
              if(isdigit(s[i1]))
              {tmp=tmp*10+s[i1]-'0';}
              else {i=i1-1; break;}
            }
            sum+=tmp;
            tmp=0;
        }
        else if(s[i]=='-')
        {
            for(int i1=i+1;i1<a;i1++)
            {
              if(isdigit(s[i1]))
              {tmp=tmp*10+s[i1]-'0';}
              else {i=i1-1; break;}
            }
            sum-=tmp;
            tmp=0;
        }
        else if(i==0)
        {
           for(;i<a;i++)
            {
              if(isdigit(s[i]))
              {tmp=tmp*10+s[i]-'0';}
              else {i--;break;}
            }
            sum+=tmp;
            tmp=0;
        }
    }
    cout<<sum<<endl;
  }

	return 0;
}