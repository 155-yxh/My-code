#include<bits/stdc++.h>
using namespace std;
string padLeft(string string1, int n, char padding=' ')
{
	int num1=n-string1.size();
	string s;
	for(int i=0;i<num1;i++)
	{
		s=s+padding;
	}
	s+=string1;
	return s;
}
string padRight(string string1, int n, char padding=' ')
{
	 string s=string1;
	 for(int i=string1.size();i<n;i++)
	 {
        s=s+padding;
	 }
	 return s;
}
int main()
{
	int num, length;
    char padding;
    string src, dest;

 while(cin >> num)
 {
  switch(num)
  {
    case 11:
    cin >> src >> length;
	if(src.size()>=length) {cout<<src<<endl; break;}
    cout << padLeft(src, length) << endl;
    break;
    case 12:
    cin >> src >> length >> padding;
	if(src.size()>=length) {cout<<src<<endl; break;}
    cout << padLeft(src, length, padding) << endl;
    break;
    case 21:
    cin >> src >> length;
	if(src.size()>=length) {cout<<src<<endl; break;}
    cout << padRight(src, length) << endl;
    break;
    case 22:
    cin >> src >> length >> padding;
	if(src.size()>=length) {cout<<src<<endl; break;}
    cout << padRight(src, length, padding) << endl;
    break;
  }
 }

	return 0;
}