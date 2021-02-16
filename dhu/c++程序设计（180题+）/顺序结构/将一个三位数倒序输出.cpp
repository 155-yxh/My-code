#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   
  int a,n,n1,n2;
  while(cin>>a)
  {
    n=a%10;
    n1=(a%100-n)/10;
    n2=(a-a%100)/100;
    if(n==0)
    {
         if(n1==0) {cout<<"  "<<n2<<endl;}
         else {cout<<" "<<n1<<n2<<endl;}
    }
    else {cout<<n<<n1<<n2<<endl;}
  }
return 0;
}