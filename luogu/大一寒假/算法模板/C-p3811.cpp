#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);
int read_int()//有大量空格时不适用  不读入前缀零
{
    int ans=0,f=1;
    char ch=getchar();
    while(!isdigit(ch)&&ch!=EOF)
    {
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(isdigit(ch))
    {
        ans=(ans<<3)+(ans<<1)+(ch^48);
        //ans%=MOD; 数太大就取模
        ch=getchar();
    }
    return f*ans;
}

int ary[3000005];
int main()
{
    ll a,b;
    a=read_int();
    b=read_int();
    ary[1]=1;
    printf("%d\n",1);
    for(int i=2;i<=a;i++)
    {
      ary[i]=(b-b/i)*ary[b%i]%b;
      printf("%d\n",ary[i]);
    }
    system("pause");  
    return 0;
}