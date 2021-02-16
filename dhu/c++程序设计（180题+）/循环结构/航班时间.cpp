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
  int x1,x2,x3,x4,m1,s1,m2,s2,n,i,m3,s3,m4,s4,a1,a2,a3,b1,b2,b3;
	while (cin >> n)
	{
		a1=0;a2=0;a3=0;//a1,a2,a3为均值
		b1=0;b2=0;b3=0;
		for (i=0;i<n;i++)
		{
			scanf("%d:%d:%d %d:%d:%d", &x1,&m1,&s1,&x2,&m2,&s2);
			char ch=getchar();
			if (ch!='\n')
			{
				getchar();
				getchar();
				ch=getchar();
				getchar();
				x2=x2+(ch-'0')*24;
			}//处理日期
			a3=s2-s1;
			if(a3<0)
			{
				a3=a3+60;
				m2=m2-1;
			}
			a2=m2-m1;
			if(a2<0)
			{
				a2=a2+60;
				x2=x2-1;
			}
			a1=x2-x1;
			scanf("%d:%d:%d %d:%d:%d",&x3,&m3,&s3,&x4,&m4,&s4);
			ch=getchar();
			if (ch!='\n')
			{
				getchar();
				getchar();
				ch=getchar();
				getchar();
				x4=x4+(ch-'0')*24;
			}
			b3=s4-s3;
			if(b3<0)
			{
				b3=b3+60;
				m4=m4-1;
			}
			b2=m4-m3;
			if(b2<0)
			{
				b2=b2+60;
				x4=x4-1;
			}
			b1=x4-x3;
			a1=(a1+b1)/2;  a2=(a2+b2)/2;  a3=(a3+b3)/2;
			cout<<setfill('0');
			cout<<setw(2)<<a1<<":"<<setw(2)<<a2<<":"<<setw(2)<<a3<<endl;
		}
	}

  return 0;
}
 