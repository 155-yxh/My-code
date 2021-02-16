#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int getResult(int a, int b, int weishu[])
{
  a=a*100;
  int n=0,b1=0;
  for (int i=0;i<=99;i++)
  {
    if(a%b==0)
    {
      weishu[b1]=a%100;
      b1++;
    }
    a++;
  }
   return b1;
}

int main()
{
    int a, b, weishu[100],count,i;
    scanf("%d%d", &a, &b);
    count=getResult(a,b,weishu);
    for(i=0; i<count; i++)
    {
        if (i>0)
        printf(" ");
        printf("%02d", weishu[i]);
    }
    printf("\n");

    return 0;
}