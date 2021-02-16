#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int number=0;
void DFS(int index,int k2,int sum,int k,int n);
vector <int> a;
int main ( )
{
    int n;
    
    while(cin>>n)
    {
      int num;
      for(int i=0;i<n;i++)
      {
          cin>>num;
          a.push_back(num);
      }
      number=0;
      for(int k=1;k<=n;k++)
      {
          DFS(0,0,0,k,n);
      }
      cout<<number<<endl;
      a.clear();
    }
 
    return 0;
}

void DFS(int index,int k2,int sum,int k,int n)
{
  if(k2==k&&sum%11==0&&sum!=0)
  {
      number++;
      return ;
  }
  if(index==n||k2>k)
  {
      return ;
  }
  DFS(index+1,k2,sum,k,n);
  DFS(index+1,k2+1,sum+a[index],k,n);
}