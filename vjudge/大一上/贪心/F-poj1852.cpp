#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <list>
#include <set>
#include <map>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      int length,num;
      cin>>length>>num;
      int a,max1=0,min1=0;
      for(int i=0;i<num;i++)
      {
         cin>>a;
         max1=max(max1,max(a,length-a));
         min1=max(min1,min(a,length-a));
      }
      cout<<min1<<" "<<max1<<endl;
    }

    return 0;
}
