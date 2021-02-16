#include <bits/stdc++.h>
using namespace std;

struct node
    {
       int num;
       string name;
       string sex;
       int age;
       int score;
    };
bool cmp(node a,node b)
{
  return a.score<b.score;
}

int main()
{
    int n;
    cin>>n;
    node n1[n];
    for(int i=0;i<n;i++)
    {
        cin>>n1[i].num>>n1[i].name>>n1[i].sex>>n1[i].age>>n1[i].score;
    }
    sort(n1,n1+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<n1[i].num<<" "<<n1[i].name<<" "<<n1[i].sex<<" "<<n1[i].age<<" "<<n1[i].score<<endl;
    }

    return 0;
}