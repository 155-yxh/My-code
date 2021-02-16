#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a;
  if (a<=150)
  cout<<fixed<<setprecision(1)<<a*0.4463;
  else if(a<=400)
  cout<<fixed<<setprecision(1)<<150*0.4463+(a-150)*0.4663;
  else if(a>400)
  cout<<fixed<<setprecision(1)<<150*0.4463+250*0.4663+(a-400)*0.5663;

    return 0;
}