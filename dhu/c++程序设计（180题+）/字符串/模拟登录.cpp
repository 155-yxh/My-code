#include<iostream>
#include<cstdio>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    char a[11];
    int password,n,i;
    cin.getline(a,11);
    while(cin>>password)
    {
        if(password==123456)
        {
            cout<<"Hello "<<a;
            break;
        }
        else if(password!=0)
        {
           cout<<"Wrong Password!"<<endl;
        }
        else
        {
           cout<<"Wrong Password!"<<endl;
           break;
        }
        
    }

    return 0;
}