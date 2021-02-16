#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool zs( int num )
{
         if(num==2||num==3)
            return 1 ;
        //不在6的倍数两侧的一定不是质数
        if(num %6!= 1&&num %6!= 5)
                return 0 ;
        int tmp =sqrt( num);
            //在6的倍数两侧的也可能不是质数
         for(int i= 5;i <=tmp; i+=6 )
             if(num %i== 0||num %(i+ 2)==0 )
                return 0 ;
        return 1 ;
}
int main ( )
{
    int n,count=1;
    long long sum=2;
    cin>>n;
    for(int i=3;;i=i+2)
    {
        if(n==1) break;
        if(zs(i)){
               count++;
               sum*=i;
               sum=sum%50000;
        }
        if(count==n) break;
    }
    cout<<sum;

    return 0;
}