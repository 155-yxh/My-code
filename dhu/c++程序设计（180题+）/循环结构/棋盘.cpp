#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int n,i,j,a1,a2,a3=1,a4,a5=1,b2,b1,cc,cc1;
  while(cin>>n>>i>>j)
  {
    for(a1=1;a1<=n;a1++)
    {
      cout<<"("<<i<<","<<a1<<")";
      if(a1==n) cout<<endl;
    }
    for(a1=1;a1<=n;a1++)
    {
      cout<<"("<<a1<<","<<j<<")";
      if(a1==n) cout<<endl;
    }
    for(a1=1;a1<=n;a1++)
    {
      if(i>j) 
      {
      a2=i-j; 
      cout<<"("<<a3+a2<<","<<a3<<")";
      b1=a3+a2;
      if(b1==n) {cout<<endl;break;}
      a3++;
      }
      if(i<j)
      {
      a4=j-i; 
      cout<<"("<<a5<<","<<a5+a4<<")";
      b2=a5+a4;
      if(b2==n) {cout<<endl;break;}
      a5++;
      }
      else if(i==j)
      {
      cout<<"("<<a1<<","<<a1<<")";
      if(a1==n)cout<<endl;
      }
    }
      a3=1;a5=1;cc=0;
      b1=j;
      cc1=i;
      while(b1!=1&&cc1!=n)
      {
        b1--;
        cc1++;
      }
    for(a1=1;a1<=n;a1++)//这段从左下到右上,b1列，cc1行
    {
 
      cout<<"("<<cc1<<","<<b1<<")";
      if(b1==n||cc1==1) {cout<<endl;break;}
      cc1--;
      b1++;
      
    }
  }

    return 0;
}