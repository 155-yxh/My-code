#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{   
  int n,i,a,b,l1=0,l2=0,l3=0,l4=0,l5=0,num,num2,i1,tmp;
  cin>>n;
  int a1[n],b1[n]={0};
  for(i=0;i<n;i++)
  {
    cin>>a1[i];
    if(a1[i]>=90)
    {
      l1++;
    }
    else if(a1[i]>=80)
    {
      l2++;
    }
    else if(a1[i]>=70)
    {
      l3++;
    }
    else if(a1[i]>=60)
    {
      l4++;
    }
    else l5++;
  }  
    cout<<l1<<" "<<l2<<" "<<l3<<" "<<l4<<" "<<l5<<endl;
    num=l1;
    if(l2>num)
    {
      num=l2;
    }
    if(l3>num)
    {
      num=l3;
    }
    if(l4>num)
    {
      num=l4;
    }
    if(l5>num)
    {
      num=l5;
    }
    cout<<num<<endl;
    if (l1>l2&&l1>l3&&l1>l4&&l1>l5)
    {
      for(i=0;i<n;i++)
      {
        if(a1[i]>=90&&a1[i]<=100)
        {
          b1[i]=a1[i];
        }
      }
    }
    else if (l2>l1&&l2>l3&&l2>l4&&l2>l5)
    {
      for(i=0;i<n;i++)
      {
        if(a1[i]>=80&&a1[i]<=89)
        {
          b1[i]=a1[i];
        }
      }
    }
    else if (l3>l1&&l3>l2&&l3>l4&&l3>l5)
    {
      for(i=0;i<n;i++)
      {
        if(a1[i]>=70&&a1[i]<=79)
        {
          b1[i]=a1[i];
        }
      }
    }
    else if (l4>l1&&l4>l2&&l4>l3&&l4>l5)
    {
      for(i=0;i<n;i++)
      {
        if(a1[i]>=60&&a1[i]<=69)
        {
          b1[i]=a1[i];
        }
      }
    }
    else if (l5>l1&&l5>l2&&l5>l3&&l5>l4)
    {
      for(i=0;i<n;i++)
      {
        if(a1[i]>=0&&a1[i]<=59)
        {
          b1[i]=a1[i];
        }
      }
    }
    
    for(i=0;i<n-1;i++)//冒泡开始
    {
      for(i1=0;i1<n-i-1;i1++)
      {
        if(b1[i1]<b1[i1+1])
        {
          tmp=b1[i1];
          b1[i1]=b1[i1+1];
          b1[i1+1]=tmp;
        }
      }
    }
    for(i=0;i<n;i++)
    {
      if(b1[i]!=0&&b1[i+1]!=0) cout<<b1[i]<<" ";
      else if(b1[i]!=0) cout<<b1[i];
      else break;
    }

  return 0;
}