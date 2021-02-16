#include <bits/stdc++.h>

using namespace std;

struct zm
        {
            char al;
            int num;
        }z[101];

bool cmp(zm a,zm b)
{
   if(a.num!=b.num) return a.num>b.num;
   return a.al<b.al;
}

int main()
{
    string s;
    while(getline(cin,s))
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);  
        }
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {s.erase(s.begin(),s.begin()+i);break;}
        }
        for(int i=s.size();i>0;i--)
        {
            if(isalpha(s[i]))
            {s.erase(s.begin()+i+1,s.end());break;}
        }
        int i1=0;
        for(int i=0;i<s.size();i++)
        {
           if(i==0||z[i1-1].al!=s[i]) 
           {
               z[i1].al=s[i];
               z[i1].num=1;
               i1++;
           }
           else{
               z[i1-1].num=z[i1-1].num+1;
           }
        }
        sort(z,z+i1,cmp);
        for(int i=0;i<i1;i++)
        {
            cout<<z[i].al<<" "<<z[i].num<<endl;
        }
        cout<<endl;
    }
    

    return 0;
}
