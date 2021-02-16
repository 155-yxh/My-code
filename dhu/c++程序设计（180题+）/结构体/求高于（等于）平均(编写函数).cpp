#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

#define N 6
typedef struct
{   
    char num[10];
    double s;
} STREC;

double fun(STREC *a,STREC *b,int *n);

int main()
{
    STREC s[N];
    STREC h[N];
    int i,n;
    double ave;
    for(i=0; i<N; i++)
    scanf("%s%lf", s[i].num, &s[i].s);
    ave=fun(s,h,&n);
    printf("%d %7.3f\n",n,ave);
    for(i=0;i<n;i++)
    printf("%s %4.1f\n",h[i].num,h[i].s);

    return 0;
}

double fun(STREC *a,STREC *b,int *n)
{
   double ave=0;
   for(int i=0; i<N; i++){
       ave+=a[i].s;
   }
   ave=ave/N;
   int i1=0;
   for(int i=0; i<N; i++){
      if(a[i].s>=ave)
      {
         b[i1]=a[i];
         i1++;
      } 
   }
   *n=i1;
   return ave;
}