#include <bits/stdc++.h>

using namespace std;
struct test
{
  string name;
  int math;
  int p;
}t[5];

bool cmp(test a, test b)
{
  return a.math>b.math;
}

int main()
{
    for(int i=0;i<5;i++)
    {
      cin>>t[i].name>>t[i].math>>t[i].p;
    }
    for(int i=0;i<5;i++)
    {
      int ave=(t[i].math+t[i].p)/2;
      cout<<t[i].name<<" "<<ave<<endl;
    }
    sort(t,t+5,cmp);
    cout<<t[0].name<<" "<<t[0].math<<" "<<t[0].p<<endl;

    return 0;
}