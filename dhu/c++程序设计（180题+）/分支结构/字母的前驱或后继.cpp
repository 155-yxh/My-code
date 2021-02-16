#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   
    char a;
    while(cin>>a)
    {
      if (a<'n')
      {a=a+1;
      cout<<a<<endl;}
      else
      {a=a-1;
      cout<<a<<endl;}
    }
      return 0;
}