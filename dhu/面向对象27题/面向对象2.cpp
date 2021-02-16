#include<bits/stdc++.h>
using namespace std;
string remove(string a, char b)
{
	int b1=-2;
	while(b1!=-1)
	{
	 b1=a.find(b);
	 if(b1==-1) break;
	 a.erase(a.begin()+b1);
	}
    return a;  
}
string remove(string a, int b)
{
	if(b<0||b>=a.size()) return a;
    a.erase(a.begin()+b);
    return a;
}
string remove(string a, int b, int c)
{
	if(b<0||c<0||c>=a.size()||b>c) return a;
    a.erase(a.begin()+b,a.begin()+c+1);
    return a; 
}
int main()
{
	 int num, index, startIndex, endIndex;
     char delChar;
     string src, dest;

   while(cin >> num)
   {
    switch(num)
    {
     case 1:
      cin >> src >> delChar;
      cout << remove(src, delChar) << endl;
      break;
     case 2:
      cin >> src >> index;
      cout << remove(src, index) << endl;
      break;
     case 3:
      cin >> src >> startIndex >> endIndex;
      cout << remove(src, startIndex, endIndex) << endl;
      break;
   }
  }

	return 0;
}