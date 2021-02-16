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
    string str[6]={"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
    int a[3],b[3],c[3];
    while(cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2]>>c[0]>>c[1]>>c[2])
    {
        int sum[6];
        long long su=a[0]+a[1]+a[2]+b[0]+b[1]+b[2]+c[0]+c[1]+c[2];
        sum[0]=a[1]+a[2]+b[0]+b[1]+c[0]+c[2];
        sum[1]=a[1]+a[2]+b[0]+b[2]+c[0]+c[1];
        sum[2]=a[0]+a[1]+b[1]+b[2]+c[0]+c[2];
        sum[3]=a[0]+a[1]+b[0]+b[2]+c[1]+c[2];
        sum[4]=a[0]+a[2]+b[1]+b[2]+c[0]+c[1];
        sum[5]=a[0]+a[2]+b[0]+b[1]+c[1]+c[2];
        int min1=sum[0],pos=0;
        for(int i=1;i<6;i++)
        {
            if(sum[i]<min1)
            {
                min1=sum[i];
                pos=i;
            }
        }
        cout<<str[pos]<<" "<<min1<<endl;
    }

    return 0;
}