#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   
  int score,a;
  cin>>score;
  if (score>89)
  {cout<<"A";}
  else if (score>79)  {cout<<"B";} 
  else if (score>69)  {cout<<"C";} 
  else if (score>59)  {cout<<"D";} 
  else {cout<<"E";} 
  return 0;
}