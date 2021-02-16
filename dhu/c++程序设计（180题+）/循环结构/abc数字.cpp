#include<iostream>
using namespace std;
int main()
{
   int a,b,c,d,e,f,n1,n2,n3,n4,n5,n6,tmp,n=0;
  while(cin>>a>>b>>c)
	{
		n=0;
    d=a*100+b*10+c;
    e=c*100+b*10+a;
    f=d*e;
    n1=f%10;
    if(n1==a||n1==b||n1==c){n++;}
    n2=(f-n1)/10;
    tmp=n2;
    n2=n2%10;
    if(n2==a||n2==b||n2==c){n++;}
    n3=(tmp-n2)/10;
    tmp=n3;
    n3=n3%10;
    if(n3==a||n3==b||n3==c){n++;}
    n4=(tmp-n3)/10;
    tmp=n4;
    n4=n4%10;
    if(n4==a||n4==b||n4==c){n++;}
     n5=(tmp-n4)/10;
    tmp=n5;
    n5=n5%10;
    if(n5==a||n5==b||n5==c){n++;}
    n6=(tmp-n5)/10;
    tmp=n6;
    n6=n6%10;
    if(n6!=0)
    {  
     if(n6==a||n6==b||n6==c){n++;}
    }
    cout<<f<<" "<<n<<endl;
  }
   	return 0;
}