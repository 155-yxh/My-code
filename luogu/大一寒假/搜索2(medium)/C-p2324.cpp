#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double PI=acos(-1.0);

int qp[6][6];
int goal[6][6];
int fx[8]={1,1,2,2,-2,-2,-1,-1};
int fy[8]={2,-2,1,-1,1,-1,2,-2};
bool bo;
struct test
{
    int x,y;
};

inline int gj()
{
    int num=0;
    for(int i=1;i<=5;i++)
    {
       for(int i1=1;i1<=5;i1++)
       {
          if(qp[i][i1]!=goal[i][i1])
          num++;
       }
    }
    return num;
}
inline int check(int x,int y)
{
    if(x<1||x>5||y>5||y<1)
    return 0;
    return 1;
}
void IDA (int step,int bound,test k,int last)
{
   if(bo==1) return;
   int numb=gj();
   if(numb==0)
   {
      bo=1;
      return;
   }
   else if(step+numb>bound) return;
   for(int i=0;i<8;i++)
   {
      test nk;
      nk.x=k.x+fx[i];nk.y=k.y+fy[i];
      if(check(nk.x,nk.y))
      {
         if(i+last==7) continue;
         swap(qp[k.x][k.y],qp[nk.x][nk.y]);
         IDA(step+1,bound,nk,i);
         swap(qp[k.x][k.y],qp[nk.x][nk.y]);
      }
   }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int i=1;i<=5;i++)
    {
        goal[1][i]=1;
        goal[2][i]=1;
        goal[4][i]=0;
        goal[5][i]=0;
    }
    goal[2][1]=0;goal[4][5]=1;goal[3][3]=2;
    goal[3][1]=goal[3][2]=0;
    goal[3][4]=goal[3][5]=1;
    while(t--)
    {
        int step;
        string s;
        test k;
        for(int i=1;i<=5;i++)
        {
           cin>>s;
           for(int i1=1;i1<=5;i1++)
           {
               if(s[i1-1]=='*')
               {
                   qp[i][i1]=2;
                   k.x=i;
                   k.y=i1;
               }
               else 
               {
                   int ch=s[i1-1]-'0';
                   qp[i][i1]=ch;
               }
           }
        }
        if(gj()==0) 
        {cout<<0<<endl; continue;}
        for(int i=1;i<=16;i++)
        {
            bo=0;
            IDA(0,i,k,10);
            if(bo==1) 
            {
                cout<<i-1<<endl;
                break;
            }
        }
        if(bo==0) cout<<-1<<endl;
    }
    return 0;
}