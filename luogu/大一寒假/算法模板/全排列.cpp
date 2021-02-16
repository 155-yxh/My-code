#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int a[10]={0,1,2,3,4,5,6,7,8,9},num=0;
void pl(int begin,int end)
{
  if(end==begin)
  {
      num++;
     // for(int i=0;i<+9;i++)
      // {cout<<a[i]<<" "; } 
      // cout<<endl;
  }
  else
  {
      for(int i=begin;i<=end;i++)
      {
          swap(a[begin],a[i]);
          pl(begin+1, end);
          swap(a[begin],a[i]);
      }
  }
}
int main()
{
    pl(0,9);
    cout<<num;
    system("pause");
    return 0;
}
