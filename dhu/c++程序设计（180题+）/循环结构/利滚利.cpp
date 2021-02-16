#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
   double money,rate,sum;
   int year,i;
   cin>>money>>year>>rate;
   sum=money;
   for(i=1;i<=year;i++)
   {
    sum=sum*(1+rate);
   }
   cout<<fixed<<setprecision(1)<<sum;

    return 0;
}
