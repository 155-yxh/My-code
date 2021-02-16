#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct ke
{
    int a,b,time,kind,num;
    int ss;
}gk[1005];
bool bo[1005];
void out(int ss);
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
      for(int i=0;i<1005;i++)
      bo[i]=0;
      int n,t,m1,m2;
      cin>>n>>t>>m1>>m2;
      for(int i=1;i<m2+1;i++)
      {
         scanf("%d:%d %d %d",&gk[i].a,&gk[i].b,&gk[i].kind,&gk[i].num);
         gk[i].time=gk[i].a*60+gk[i].b;
      }
      int newt=-1;
      for(int i=1;i<m2+1;i++)
      {
         if(bo[i]!=0) continue;
         newt=max(newt,gk[i].time);
         int cf;  cf=(gk[i].num)/m1;
         if((gk[i].num)%m1!=0) cf++;
         gk[i].ss=cf*t+newt;
         int cf2=gk[i].ss-t;
         newt=gk[i].ss;
         int lev=cf*m1-gk[i].num;
         bo[i]=1;
         for(int i1=i+1;i1<m2+1;i1++)
         {
            if(gk[i1].time>cf2) break;
            if(gk[i1].kind!=gk[i].kind) continue;
            if(lev>=gk[i1].num)
            {
               gk[i1].ss=gk[i].ss;
               bo[i1]=1;
               lev=lev-gk[i1].num;
            }
            else
            {
               {
                  gk[i1].num-=lev;
                  lev=0; break;
               }
            }
            
         }
      }
      for(int i=1;i<m2+1;i++)
      {
         out(gk[i].ss);
      }
      if(x) cout<<endl;
    }

    return 0;
}
void out(int ss)
{
   int h=ss/60;
   h=h%24;
   int m=ss%60;
   if(h<=9) printf("0%d:",h);
   else printf("%d:",h);
   if(m<=9) printf("0%d\n",m);
   else printf("%d\n",m);
}