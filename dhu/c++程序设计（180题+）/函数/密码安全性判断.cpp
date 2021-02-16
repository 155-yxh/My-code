#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool judge(char code[]);

int main()
{  
    char code[1000]; 
    int num;
    cin>>num;
    for(int i=0; i<num; i++)
    {
       cin>>code;
       if(judge(code)) cout<<1<<endl;             
       else cout<<0<<endl;
    }

    return 0;
}

bool judge(char code[])
{
  int i,n,s1=0,s2=0,s3=0,s4=0;
  n=strlen(code);
  if(n<8||n>16) return 0;
  for(i=0;i<n;i++)
  {
    if(code[i]>='A'&&code[i]<='Z') s1++;
    else if(code[i]>='a'&&code[i]<='z') s2++;
    else if(code[i]>='0'&&code[i]<='9') s3++;
    else if(code[i]=='~'||code[i]=='^'||code[i]=='!'||code[i]=='@'||code[i]=='#'||code[i]=='$'||code[i]=='%') s4++;
  }
  if(s1>0) s1=1;
  if(s2>0) s2=1;
  if(s3>0) s3=1;
  if(s4>0) s4=1;
  int sum;
  sum=s1+s2+s3+s4;
  if(sum>=3) return 1;
  else return 0;
}