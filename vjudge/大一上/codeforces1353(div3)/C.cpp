#include <ctype.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <list>
#include <set>
#include <map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      long long n;
      cin>>n;
      if(n==1) cout<<0<<endl;
      else{
        long long m=0;
        int l=n/2;
        long long num;
        for(int i=1;i<=l;i++){
          num=8+8*(i-1);
          m+=num*i;
        }
        cout<<m<<endl;
      }
    }

    return 0;
}
