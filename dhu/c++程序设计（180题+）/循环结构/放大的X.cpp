#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int t,a,h,h2,l,l2,n=0,m=0,i,i2,i3,l3,h3,tmp;
  cin>>t;
  for(;t>0;t--)
  {
    cin>>a;
    h=a;
    l=0;
    i=a-2;
    if(a%2==0)
    {
       for(;h>0;h=h-2)
       { 
        for(l=0+n;l>0;l--){cout<<" ";}
        cout<<"X";
        for(;i>0;i--){cout<<" ";}
        m=m+2;
        i=a-2-m;
        cout<<"X"<<endl;
        n++;
       }
       m=0;n=0;i=a-2;l=0;h=a;i2=0;
       for(h2=0;h2<a;h2=h2+2)
       {
        for(l2=a/2-1+n;l2>0;l2--){cout<<" ";}
        cout<<"X";
        for(i2;i2>0;i2--){cout<<" ";}
        m=m+2;
        i2=i2+m;
        cout<<"X"<<endl;
        n--;
       }
       m=0;n=0;i2=a-2;l2=a/2-1;h2=0;
       cout<<"\n";  
    }
    else
    {
      for(;h>1;h=h-2)
       { 
        for(l=0+n;l>0;l--){cout<<" ";}
        cout<<"X";
        for(;i>0;i--){cout<<" ";}
        m=m+2;
        i=a-2-m;
        cout<<"X"<<endl;
        n++;
       }
       m=0;n=0;i=a-2;l=0;h=a;i2=0;tmp=a/2;
       for(;tmp>0;tmp--){cout<<" ";}
       cout<<"X"<<endl;
       i3=1;l3=a/2-1;h3=0;
       for(h3=1;h3<a;h3=h3+2)
       {
        for(l3=a/2+n-1;l3>0;l3--){cout<<" ";}
        cout<<"X";
        for(;i3>0;i3--){cout<<" ";}
        m=m+2;
        i3=i3+m+1;
        cout<<"X"<<endl;
        n--;
       }
       m=0;n=0;  
      cout<<"\n";
    } 
  }

    return 0;
}