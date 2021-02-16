#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{   
char n;
while(cin>>n)
{
  if(n>='a'&&n<='z')
  {n=n-'a'+'A';
  cout<<n<<endl;}
  else if(n>='A'&&n<='Z')
  {n=n-'A'+'a';
  cout<<n<<endl;}
}
    return 0;
}