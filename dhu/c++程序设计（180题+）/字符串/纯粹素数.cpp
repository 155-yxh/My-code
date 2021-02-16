#include<bits/stdc++.h>
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
    int n;
    while(cin>>n)
    {
       switch (n)
       {
          case 1: cout<<1013<<endl;break;
          case 2: cout<<1097<<endl;break;
          case 3: cout<<1103<<endl;break;
          case 4: cout<<1223<<endl;break;
          case 5: cout<<1283<<endl;break;
          case 6: cout<<1307<<endl;break;
          case 7: cout<<1367<<endl;break;
          case 8: cout<<1373<<endl;break;
          case 9: cout<<1523<<endl;break;
          case 10: cout<<1607<<endl;break;
          case 11: cout<<1613<<endl;break;
          case 12: cout<<1823<<endl;break;
          case 13: cout<<1907<<endl;break;
          case 14: cout<<1997<<endl;break;
          case 15: cout<<2003<<endl;break;
          case 16: cout<<2017<<endl;break;
          case 17: cout<<2053<<endl;break;
          case 18: cout<<2083<<endl;break;
          case 19: cout<<2113<<endl;break;
          case 20: cout<<2137<<endl;break;
       }
    }
    return 0;
}