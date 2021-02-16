#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;


int main()
{  
    int i,i1,a,m;
    int a1[2][3],a2[2][3],a3[2][3],a4[2][3],a5[2][3]; 
    a1[0][0]=1;a1[0][1]=2;a1[0][2]=3;a1[1][0]=4;a1[1][1]=5;a1[1][2]=6;
    a2[0][0]=1;a2[0][1]=2;a2[0][2]=4;a2[1][0]=3;a2[1][1]=5;a2[1][2]=6;
    a3[0][0]=1;a3[0][1]=2;a3[0][2]=5;a3[1][0]=3;a3[1][1]=4;a3[1][2]=6;
    a4[0][0]=1;a4[0][1]=3;a4[0][2]=4;a4[1][0]=2;a4[1][1]=5;a4[1][2]=6;
    a5[0][0]=1;a5[0][1]=3;a5[0][2]=5;a5[1][0]=2;a5[1][1]=4;a5[1][2]=6;
    while(cin>>m)
    {
      switch(m)
      {
        case 1:  
               for(i=0;i<2;i++)
               {
                 for(i1=0;i1<3;i1++)
                 {
                   if(i1==2) 
                   {cout<<a1[i][i1]<<endl;}
                   else cout<<a1[i][i1]<<" ";
                 }
               }
               break;
        case 2:
                for(i=0;i<2;i++)
               {
                 for(i1=0;i1<3;i1++)
                 {
                   if(i1==2) 
                   {cout<<a2[i][i1]<<endl;}
                   else cout<<a2[i][i1]<<" ";
                 }
               }
               break;
        case 3:
              for(i=0;i<2;i++)
               {
                 for(i1=0;i1<3;i1++)
                 {
                   if(i1==2) 
                   {cout<<a3[i][i1]<<endl;}
                   else cout<<a3[i][i1]<<" ";
                 }
               }
               break;
        case 4:
               for(i=0;i<2;i++)
               {
                 for(i1=0;i1<3;i1++)
                 {
                   if(i1==2) 
                   {cout<<a4[i][i1]<<endl;}
                   else cout<<a4[i][i1]<<" ";
                 }
               }
               break;
        case 5:
               for(i=0;i<2;i++)
               {
                 for(i1=0;i1<3;i1++)
                 {
                   if(i1==2) 
                   {cout<<a5[i][i1]<<endl;}
                   else cout<<a5[i][i1]<<" ";
                 }
               }
               break;
       default: break;
      }
    }

    return 0;
}