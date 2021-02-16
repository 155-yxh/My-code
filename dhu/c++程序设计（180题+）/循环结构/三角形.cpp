#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
  int s,n,a,b;//a为行b为每行个数
   while(cin>>s>>n)
   {
     cout<<s++;
     for(a=2;a<=n;a++)
     {
         cout<<'\n';
         for(b=1;b<=a;b++)
         {
           if(s>=10) {s=1;}
           if(b<a) cout<<s++<<" ";
           else cout<<s++;
         }
     }   
   
   }
;
    return 0;
}
