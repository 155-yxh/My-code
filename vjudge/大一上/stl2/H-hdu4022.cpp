#include <bits/stdc++.h>
using namespace std; 

int main()
{
    map < int, multiset<int> > x,y;
	 int m,n;
    while(1)
    {
       scanf("%d%d",&n,&m);
       if(n==0&&m==0) break;
       int a,b;
       for(int i=0;i<n;i++)
        {
           scanf("%d%d",&a,&b);
           x[a].insert(b);
           y[b].insert(a);
        }
       for(int i=0;i<m;i++)
       {
           int num=0;
           scanf("%d%d",&a,&b);
           if(a==0) 
           {
              printf("%d\n",x[b].size());
              for(auto it=x[b].begin();it!=x[b].end();it++)
              {y[*it].erase(b);}
              x[b].clear();
           }
           else 
           {
              printf("%d\n",y[b].size());
              for(auto it=y[b].begin();it!=y[b].end();it++)
              {x[*it].erase(b);}
              y[b].clear();
           }
       }
       printf("\n");
    }
    return 0;
}
