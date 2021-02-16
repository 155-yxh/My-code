#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
   int n;
   int num1=0;
   string s;
   int c1=0;
   while(cin>>n)
   {
      num1++;
      int num=100;
      if(n==0) break;
      if(c1!=0) cout<<endl;
      cin>>s;
      int lcr[10005],center=0;
      for(int i=0;i<n;i++)
      {lcr[i]=3;}
      int bo=0;
      int i2=0;
      for(int i=0;i<s.size();i++)
      {
         bo=0;
         for(int p=0;p<n;p++)
         {
            if(lcr[p]==0) 
            bo++;
            else num=p;
         }
            if(bo==n-1) {break;}
            num=i2;
            if(lcr[i2]==1)
            {
                     int i1=i;
                     if(s[i1]=='R') 
                     {
                        if(i2==0) 
                        {lcr[n-1]++; lcr[i2]--;} 
                        else {lcr[i2-1]++;lcr[i2]--;}
                     }
                     else if(s[i1]=='L')
                     {
                        if(i2==n-1) 
                        {lcr[0]++;lcr[i2]--;}
                        else {lcr[i2+1]++;lcr[i2]--;}
                     }
                     else if(s[i1]=='C')
                     {lcr[i2]--;center++;}
                     bo=0;
                     for(int p=0;p<n;p++)
                     {
                        if(lcr[p]==0) 
                        bo++;
                        else num=p;
                     }
                     if(bo==n-1) {break;}
                      num=i2;
         
            }
            else if(lcr[i2]==2)
            {
                  if(s.size()<=i+1) 
                  {
                     num--;
                     break;
                  }
                  int i1=0;
                  for(i1=i;i1<i+2;i1++)
                  {
                     if(s[i1]=='R') 
                     {
                        if(i2==0) 
                        {lcr[n-1]++; lcr[i2]--;} 
                        else {lcr[i2-1]++;lcr[i2]--;}
                     }
                     else if(s[i1]=='L')
                     {
                        if(i2==n-1) 
                        {lcr[0]++;lcr[i2]--;}
                        else {lcr[i2+1]++;lcr[i2]--;}
                     }
                     else if(s[i1]=='C')
                     {lcr[i2]--;center++;}
                     bo=0;
                     for(int p=0;p<n;p++)
                     {
                        if(lcr[p]==0) 
                        bo++;
                        else num=p;
                     }
                     if(bo==n-1) {break;}
                      num=i2;
                  }
                  i=i1-1;
            }
            else if(lcr[i2]>=3)
            {    
                  if(s.size()<=i+2) 
                  {
                     num--;
                     break;
                  }
                  int i1=0;
                  for(i1=i;i1<i+3;i1++)
                  {
                     if(s[i1]=='R') 
                     {
                        if(i2==0) 
                        {lcr[n-1]++; lcr[i2]--;} 
                        else {lcr[i2-1]++;lcr[i2]--;}
                     }
                     else if(s[i1]=='L')
                     {
                        if(i2==n-1) 
                        {lcr[0]++;lcr[i2]--;}
                        else {lcr[i2+1]++;lcr[i2]--;}
                     }
                     else if(s[i1]=='C')
                     {lcr[i2]--;center++;}
                     bo=0;
                     for(int p=0;p<n;p++)
                     {
                        if(lcr[p]==0) 
                        bo++;
                        else num=p;
                     }
                     if(bo==n-1) {break;}
                      num=i2;
                  }
                  i=i1-1;
            }
            else i--;          
         i2++;
         if(i2==n) i2=0;
      }
      int lcr2[n];
      for(int i=0;i<n;i++)
      {lcr2[i]=lcr[i];}
      sort(lcr2,lcr2+n);
      cout<<"Game "<<num1<<":"<<endl;
      if(lcr2[n-1]!=0&&lcr2[n-2]==0)
      {
        for(int i=0;i<n;i++)
        {
           if(i==num) cout<<"Player "<<i+1<<":"<<lcr[i]<<"(W)"<<endl;
           else cout<<"Player "<<i+1<<":"<<lcr[i]<<endl;
        }
      }
      else
      {
        if(num<n-1) num++;
        else num=0;
        while(!lcr[num])
        {
          if(num==n-1) num=0;
          else num++;
        }
        for(int i=0;i<n;i++)
        {
           if(i==num) cout<<"Player "<<i+1<<":"<<lcr[i]<<"(*)"<<endl;
           else cout<<"Player "<<i+1<<":"<<lcr[i]<<endl;
        }
      }
      cout<<"Center:"<<center<<endl;
      c1=1;
   }
    return 0;
}
