#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
 int main()
 {
    int i,i1,m,m2,m3,b,num;
    char n;
    cin>>m;
    b=0;
    while(cin>>n>>num)
    {
      m3=1;
      m2=1;
     for(i1=1;i1<=num;i1++)
     {
      
      if(i1==1) 
      { 
        for(i=1;i<=(num*2-1)/2;i++)
        {
          cout<<" ";
        }
          cout<<n;
       
          cout<<"\n";
      }
       else if(i1!=num)//这里
      {
        for(i=1;i<=(num*2-1)/2-m2;i++)
        {
          cout<<" ";
        }
        cout<<n;
        for(i=1;i<=m3;i++)
        {
          cout<<" ";
        }
        cout<<n;
        
        m2++;
        m3=m3+2;
        cout<<"\n";
      }
      else if(i1==num)
      {
        for(i=1;i<=num*2-1;i++)
        {
          cout<<n;
        }
        cout<<"\n"<<"\n";
      }
     }
     b++;
     if(b==m) break;
    }

    return 0;
 }