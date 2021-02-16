#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool zs( int num )
{
    if(num==1)
     return 0;
    if(num==2||num==3)
      return 1 ;
    if(num%6!=1&&num%6!=5)
        return 0 ;
    int tmp=sqrt(num);
    for(int i=5;i<=tmp;i+=6 )
    {
        if(num%i==0||num%(i+2)==0 )
          return 0 ;
    }
        return 1 ;
}

int main()
{
    int max1=0;
    string n;
    while(cin>>n)
    {
      int a=n.size();
      int m=4;
      m=min(4,a);
      for(int i=m;i>0;i--)
      {
          for(int i1=0;i1<a-i+1;i1++)
          {
              int zc=0; string str;
              str=n.substr(i1,i);
              int b=str.size();
              for(int i2=0;i2<b;i2++)
              {
                  zc=zc*10+str[i2]-'0';
              }
              if(zs(zc))
              max1=max(max1,zc);
          }
      }
      cout<<max1<<endl;
      max1=0;
    }
	return 0;
}