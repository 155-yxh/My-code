#include<bits/stdc++.h>
using namespace std;
string cpy(string a,int b1=-10086,int b2=-10086)
{
  if(b1==-10086&&b2==-10086) return a;
  if(b2==-10086)
  {
     if(b1<0||b1>=a.size()) return "";
     a.erase(a.begin(),a.begin()+b1);
     return a;
  }
  if(b1<0||b2<0||b1>=a.size()||b2>=a.size()||b1>b2) return "";
  a.erase(a.begin(),a.begin()+b1);
  a.erase(a.begin()+b2+1-b1,a.end());
  return a;
}
int main()
{
	int num, length, index, startIndex, endIndex;
    string src, dest;

 while(cin >> num)
 {
  switch(num)
  {
   case 1:
    cin >> src;
    cout << cpy(src) << endl;
    break;
   case 2:
    cin >> src >> startIndex;
    cout << cpy(src, startIndex) << endl;
    break;
   case 3:
    cin >> src >> startIndex >> endIndex;
    cout << cpy(src, startIndex, endIndex) << endl;
    break;
  }
 }

	return 0;
}