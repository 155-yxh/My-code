#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
long long poww (int a,int b)
{
    long long ans=1,base=a;
    while(b!=0)
    {
        if(b&1!=0)
        {ans*=base;}
        base*=base;
        b>>=1;
    }
    return ans;
}
long long js(int x,int y,int z)
{
   long long r=poww(x,z)+poww(y,z)+x*y*z;
   return r;
}
int main()
{
    int k;
    while(cin>>k)
    {
       if(k==0) break;
       int xmax=int (sqrt(k/2));
       int zmax=int (log(k)/log(2));
       long long num=0;
       for(int x=1;x<=xmax;x++)
       {
          for(int z=2;poww(x,z)/2<k&&z<=zmax;z++)
          {
             long long left=x+1,right=int (pow(k*1.0,1.0/z));
             while(left<=right)
             {
               long long mid=(left+right)/2;
               long long value=js(x,mid,z);
               if(value==k) 
               {
                   num++;
                   break;
               }
               else if(value<k) left=mid+1;
               else right=mid-1;
             }
          }
       }
       cout<<num<<endl;
    }

    return 0;
}
