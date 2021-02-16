#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <list>
#include <set>
#include <map>
#include <queue>
using namespace std;
 
int main()
{
	priority_queue < int, vector<int>, greater<int> > que;
    int n;
    cin>>n;
    if(n<=1) {int a; cin>>a; cout<<0; return 0;}
    while(n--)
    {
        int a;
        cin>>a;
        que.push(a);
    }
    long long sum=0;
    while(que.size()>=2)
    {
        int a=que.top();
        que.pop();
        int b=a+que.top();
        que.pop();
        sum+=b;
        que.push(b);
    }
    cout<<sum;

	return 0;
}
