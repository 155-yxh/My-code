#include <bits/stdc++.h>

using namespace std;
struct pos
{
    int a,b;
    char fx;
    int v;
    int left;
};
void move(pos &a,int t);
void turn(pos &a)
{
    switch(a.fx)
    {
        case 'W':a.fx='S';break;
        case 'S':a.fx='E';break;
        case 'N':a.fx='W';break;
        case 'E':a.fx='N';break;
    }
}
int main()
{
    int t;
    while(cin>>t)
    {
       if(t==0) break;
       int k;
       pos tom,jerry;
       cin>>tom.fx>>tom.v>>tom.left;
       cin>>jerry.fx>>jerry.v>>jerry.left;
       cin>>k;
       tom.a=1;tom.b=1;
       jerry.a=t;jerry.b=t;
       for(int i=1;i<=k;i++)
       {
          move(tom,t);
          move(jerry,t);
          if(tom.a==jerry.a&&jerry.b==tom.b)
          {
              swap(tom.fx,jerry.fx);
          }
          else
          {
              if(i%tom.left==0) turn(tom);
              if(i%jerry.left==0) turn(jerry);
          }
       }
       cout<<tom.a<<" "<<tom.b<<endl;
       cout<<jerry.a<<" "<<jerry.b<<endl;
       
    }

    return 0;
}
void move(pos &a,int t)
{
    a.v%=(t-1)*2;
    switch(a.fx)
    {
         
        case 'W':if(a.b-a.v>=1) a.b=a.b-a.v;
                 else{
                     a.fx='E';
                     a.b=a.v-a.b+2;
                 }
                 break;
        case 'S':if(a.a+a.v<=t) a.a=a.a+a.v;
                 else{
                     a.fx='N';
                     a.a=2*t-a.a-a.v;
                 }
                 break;
        case 'N':if(a.a-a.v>=1) a.a=a.a-a.v;
                 else{
                     a.fx='S';
                     a.a=a.v-a.a+2;
                 }
                 break;
        case 'E':if(a.b+a.v<=t) a.b=a.b+a.v;
                 else{
                     a.fx='W';
                     a.b=2*t-a.b-a.v;
                 }
                 break;
    }
}
