#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
  int a,n,i,i1,i2;
  char ch='Z';
  cin>>a;
  if(a==1) cout<<ch<<endl;
     else 
     {
       for(i=1;i<a;i++)
       {
          cout<<" ";
       }
          cout<<ch<<endl;
          ch=ch-1;
       for(i1=1;i1<=a-1;i1++)
       {
          for(i=1;i<a-i1;i++)
          {
            cout<<" ";
          }
            cout<<ch;
            ch=ch-1;
            for(i2=i1*2-1;i2>0;i2--){cout<<" ";}
            cout<<ch<<endl;
            ch=ch-1;
       }
       for(i1=1;i1<a-1;i1++)//.
       {
         for(i=1-i1;i<1;i++)
         {
           cout<<" ";
         }
         cout<<ch;
         ch=ch-1;
         for(i2=(a-1)*2-1-2*i1;i2>0;i2--){cout<<" ";}
         cout<<ch<<endl;
         ch=ch-1;
       }
       for(i=1;i<a;i++)
          {
            cout<<" ";
          }
            cout<<ch<<endl;
            ch=ch-1;
     }
  while(cin>>a)
  {
     ch='Z';
     cout<<'\n';
     if(a==1) cout<<ch<<endl;
     else 
     {
       for(i=1;i<a;i++)
       {
          cout<<" ";
       }
          cout<<ch<<endl;
          ch=ch-1;
       for(i1=1;i1<=a-1;i1++)
       {
          for(i=1;i<a-i1;i++)
          {
            cout<<" ";
          }
            cout<<ch;
            ch=ch-1;
            for(i2=i1*2-1;i2>0;i2--){cout<<" ";}
            cout<<ch<<endl;
            ch=ch-1;
       }
       for(i1=1;i1<a-1;i1++)//.
       {
         for(i=1-i1;i<1;i++)
         {
           cout<<" ";
         }
         cout<<ch;
         ch=ch-1;
         for(i2=(a-1)*2-1-2*i1;i2>0;i2--){cout<<" ";}
         cout<<ch<<endl;
         ch=ch-1;
       }
       for(i=1;i<a;i++)
          {
            cout<<" ";
          }
            cout<<ch<<endl;
            ch=ch-1;
     }
  }

  return 0;
}