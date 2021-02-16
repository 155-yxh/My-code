#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int a[200005],b[200005],mpa[200005],mpb[200005];
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
      int a1,b1,k;
      memset(mpa,0,sizeof(mpa));
      memset(mpb,0,sizeof(mpb));
      cin>>a1>>b1>>k;
      for(int i=1;i<=k;i++)
      {
          cin>>a[i];
          mpa[a[i]]++;
      }
      for(int i=1;i<=k;i++)
      {
          cin>>b[i];
          mpb[b[i]]++;
      }
      ll sum=0;
      if(k<=1) {cout<<0<<endl; continue;}
      for(int i=1;i<=k;i++)
      {
          sum+=k+1-mpa[a[i]]-mpb[b[i]];
      }
      cout<<sum/2<<endl;
    }
    system("pause");
    return 0;
}