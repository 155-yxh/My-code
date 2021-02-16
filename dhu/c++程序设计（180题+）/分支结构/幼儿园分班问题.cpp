#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{   
  int i;
  while(cin>>i)
  {
    switch (i)
    {
       case 2:
       case 3: cout<<"One."<<endl;  break;
       case 4: cout<<"Two."<<endl;  break;
       case 5:
       case 6: cout<<"Three."<<endl;  break;
       default: cout<<"No."<<endl; break;
    }
  }
  return 0;
}