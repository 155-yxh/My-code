#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
  int a,b,c,d,e,f,n=0,i,day1,day2,day3,length;
  while(cin>>a>>b>>c>>d>>e>>f)
  {
    n=0;
    for(day1=0;day1<=100;day1++){
      for(day2=day1;day2<=100;day2++){
        for(day3=day2;day3<=100;day3++){
          if((day1*24+c)*f==(day2*24+b)*e&&(day1*24+c)*f==(day3*24+a)*d)
          {
            length=(day1*24+c)*f;
            cout<<length<<endl;
            n=1;
          }
          if(n) break;
        }
        if(n) break;
      }
      if(n) break;
    }
  }
  return 0;
}