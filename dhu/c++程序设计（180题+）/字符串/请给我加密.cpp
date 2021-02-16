#include<iostream>
#include <iomanip>
#include<cmath>
#include<cstdio>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
  int n;
	while(scanf("%d",&n)!=EOF)
  {
		for(int i=1;i<=n;i++)
    {
			char a[100];
			int M;
			getchar();
		  gets(a);
			scanf("%d",&M);
			int k=0;
			while(a[k]!='\0')
      {
				if(a[k]>='a'&&a[k]<='z')
				{
				    a[k]=a[k]-96+M;
					int t=k+1;
					if(a[t]=='\0')
					printf("%d",a[k]);
					else printf("%d ",a[k]);
				}
					else if(a[k]==' ')
					{
						  a[k]=0;
						  int t=k+1;
					if(a[t]=='\0')
					printf("%d",a[k]);
					else printf("%d ",a[k]);
          }
					else 
          {
            	int b=a[k];
					    b+=100;
					    int t=k+1;
					    if(a[t]=='\0')
					    printf("%d",b);
					    else printf("%d ",b);
					}
					k++;
				}
				printf("\n");
		}
	}
 

  return 0;
}
 