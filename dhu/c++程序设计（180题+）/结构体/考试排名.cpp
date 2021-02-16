#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <list>
#include <set>
#include <map>
#include <queue>
using namespace std;
struct node
{
    char id[15];
    int num,v;
};
node w[10005];
bool cmp(node a,node b)
{
    if(a.num!=b.num) return a.num>b.num;
    else if(a.v!=b.v) return a.v<b.v;
    if(strcmp(a.id,b.id)<0) return 1;
    return 0;
}
int main()
{
    int n,m,t=0;
    char x[15],id[15];
    scanf("%d %d",&n,&m);
    while(scanf("%s",id)!=EOF)
    {
        strcpy(w[t].id,id);
        w[t].v=0;
        w[t].num=0;
        for(int i=0; i<n; ++i){
            int a=0,b=0,v1=0,v2=0;
            scanf("%s",x);
            if(x[0]=='0'||x[0]=='-') continue;
            ++w[t].num;
            for(int j=0;j<strlen(x);++j)
            {
                if(x[j]=='(')a=j;
                else if(x[j]==')') b=j;
            }
            if(a!=0)
            {
                for(int j=a+1;j<b;++j){
                    v1=v1*10+x[j]-'0';
                }
                for(int j=0;j<a;++j){
                    v2=v2*10+x[j]-'0';
                }
            }
            else
            {
                for(int j=0;j<strlen(x);++j)
                    v2=v2*10+x[j]-'0';
            }
            w[t].v+=(v1*m+v2);
        }
        t++;
    }
    sort(w,w+t,cmp);
    for(int i=0;i<t;++i)
    {
        printf("%-10s %2d %4d\n",w[i].id,w[i].num,w[i].v);
    }
    return 0;
}
