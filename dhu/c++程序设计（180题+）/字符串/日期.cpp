#include<iostream>
#include<cstdio>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    char a[4];
    int password,n,i;
    bool bo;
    while(cin.getline(a,4))
    {
        if(a[0]=='S') 
        {
          if(a[1]=='u') cout<<"Sunday"<<endl;
          else   cout<<"Saturday"<<endl;
        }
      else if(a[0]=='M') cout<<"Monday"<<endl;
      else if(a[0]=='T')   
        {
          if(a[1]=='u') cout<<"Tuesday"<<endl;
          else   cout<<"Thursday"<<endl;
        }
      else if(a[0]=='W') cout<<"Wednesday"<<endl; 
      else if(a[0]=='F') cout<<"Friday"<<endl;
      
    }

    return 0;
}