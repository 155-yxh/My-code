#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{   
double x,y;
while(cin>>x>>y)
{
  if(x*x+y*y>20.25) cout<<"out"<<endl;
  if(x*x+y*y==20.25) cout<<"on"<<endl;
  if(x*x+y*y<20.25) cout<<"in"<<endl;
}
    return 0;
}
