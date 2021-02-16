#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{  
  int m;
  
  while(cin>>m)
  {
	int  i,m1,m2,m3,m4,money1,money2=0,money=0,a=0;
	char a1[22],ao[22],b1,b2,b3; 
	while(1)
   {
    cin>>a1; 
    cin>>m1>>m2>>b1>>b2>>m3;
    money1=0;
    if(m2>80&&b1=='Y')
    {money1+=850;}
    if(m1>85&&b2=='Y')
    {money1+=1000;}
    if(m1>90)
    {money1+=2000;}
    if(m1>85&&m2>80)
    {money1+=4000;}
    if(m1>80&&m3>=1)
    {money1+=8000;}
    money+=money1;
    if(money1>money2)
    {
      money2=money1;
       for(i=0;i<=20;i++)
      {
        ao[i]=a1[i];
      }
    }
    a++;
    if(a==m) break;
   }
   cout<<ao<<endl<<money2<<endl<<money<<endl<<endl;
  } 

    return 0;
}