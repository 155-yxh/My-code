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
 int n,i,j,k,sum;
 cin>>n;
 for(i=1;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=0;
			for(k=i;k<=j;k++)
			{
				sum=sum+k;
				if (sum>n) break;
			}
			if (sum==n)
			{
				cout<<i<<" "<<j<<endl;;
				break;
			}
		}
	}

  return 0;
}