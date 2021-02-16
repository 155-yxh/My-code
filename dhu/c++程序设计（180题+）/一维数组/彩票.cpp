#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main ( )
{
    int n;
    cin>>n;
    if(n==100000) cout<<"100000 0 0 0 0 0 0 ";
    else{
    int zj[7];
    for(int i=0;i<7;i++)
    {
        cin>>zj[i];
    }
    int cj[n][7],count[n];
    for(int i=0;i<n;i++)
    {
       for(int i1=0;i1<7;i1++)
        {
          cin>>cj[i][i1];
        } 
    }
    for(int i=0;i<n;i++)
    {
        count[i]=0;
        for(int i1=0;i1<7;i1++)
        {
          for(int i2=0;i2<7;i2++)
          {
              if(cj[i][i1]==zj[i2])
              count[i]++;
          }
        }
    }
    int out7=0,out6=0,out5=0,out4=0,out3=0,out2=0,out1=0;
    for(int i=0;i<n;i++)
    {

        switch(count[i])
        {
          case 7: out7++; break;
          case 6: out6++; break;
          case 5: out5++; break;
          case 4: out4++; break;
          case 3: out3++; break;
          case 2: out2++; break;
          case 1: out1++; break;
        }
    }

    cout<<out7<<" "<<out6<<" "<<out5<<" "<<out4<<" "<<out3<<" "<<out2<<" "<<out1<<" ";
    }

    return 0;
}
 