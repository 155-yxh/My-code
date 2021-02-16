#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
 int main()
 {
    int i=1,n;
    cin>>n;
    while(n>i)
    {
    	n=n-i;
      i++;
    }
    if(i%2==0)cout<<n<<"/"<<i+1-n;
    else cout<<i+1-n<<"/"<<n; 

    return 0;
 }