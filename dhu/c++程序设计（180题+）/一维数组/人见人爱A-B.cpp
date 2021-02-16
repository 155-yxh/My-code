#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
  int a,b,c,d,n,i,i1,i3,b1;
  bool bo;
  cin>>a;
  while(a)
  {
    cin>>b>>c;
    bo=0;
    int a1[b],a2[c];
    for(i=0;i<b;i++)
    {
      cin>>a1[i];
    }
    for(i=0;i<c;i++)
    {
      cin>>a2[i];
    }
    b1=0;
    for(i=0;i<b;i++){
      for(i1=0;i1<c;i1++){
        if(a1[i]==a2[i1])
        {
            for(i3=i;i3<b-1;i3++)
            {
            a1[i3]=a1[i3+1];
            }
            i--;
            b1++;
            if(a1[0]==a1[b-1]) {bo=1;}
            break;
        }
        if(bo) break;
      }
      if(bo) break;
    }
    for(i1=0;i1<c;i1++)
    {
      if(a1[b-1]==a2[i1]){
        b1++;
      }
    }
    sort(a1,a1+b);
    for(i=0;i<b-b1;i++)
    {
      cout<<a1[i]<<" ";
    }
    if(b-b1>0) cout<<'\n';
    if(b-b1<=0)
    {cout<<"NULL"<<endl;}
    a--;
  }

  return 0;
}