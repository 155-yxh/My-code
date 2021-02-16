#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int main()
{
    string a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
        exit(0);
    }
    string ans;
    int a1=a.size();
    int b1=b.size();
    int ms;
    bool bo=0;
    if(a1>b1) 
    {
        ms=b1;
        bo=0;
    }
    else if(a1<b1)
    {
        ms=a1;
        bo=1; 
    }
    else if(a>=b)
    {
       ms=a1;
       bo=0;
    }
    else
    {  
       ms=a1;
       bo=1;
    }

    int down=0,tmp;
    if(bo==0)//s1-b
    {
       string s1;
       for(int i=a1-ms;i<a1;i++)
       {
           s1.push_back(a[i]);
       }
       for(int i=ms-1;i>=0;i--)
       {
           tmp=s1[i]-b[i]-down;
           if(tmp<0)
           {
               down=1;
               tmp+=10;
           }
           else down=0;
           ans.push_back(tmp+'0');
       }
       for(int i=a1-ms-1;i>=0;i--)
       {
           tmp=a[i]-down-'0';
           if(tmp<0)
           {
               down=1;
               tmp+=10;
           }
           else down=0;
           ans.push_back(tmp+'0');
       }
    }
    else//b-a  s1-a
    {
       string s1;
       for(int i=b1-ms;i<b1;i++)
       {
           s1.push_back(b[i]);
       }
       for(int i=ms-1;i>=0;i--)
       {
           tmp=s1[i]-a[i]-down;
           if(tmp<0)
           {
               down=1;
               tmp+=10;
           }
           else down=0;
           ans.push_back(tmp+'0');
       }
       for(int i=b1-ms-1;i>=0;i--)
       {
           tmp=b[i]-down-'0';
           if(tmp<0)
           {
               down=1;
               tmp+=10;
           }
           else down=0;
           ans.push_back(tmp+'0');
       }
       ans.push_back('-');
    }
    reverse(ans.begin(),ans.end());
    while(1)
    {
        if(ans[0]!='0') break; 
        ans.erase(ans.begin());
    }
    cout<<ans;
    system("pause");
    return 0;
}