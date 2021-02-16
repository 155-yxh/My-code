#include <iostream>
#include <iomanip>
#include <stdlib.h>

int main(){
  int y,m,d,n;
  int maxy,miny,maxm,minm,maxd,mind;
  
  scanf("%d",&n);
  scanf("%d%d%d",&y,&m,&d);
    maxy=miny=y; 
    maxm=minm=m; 
    maxd=mind=d;
  for (int i=1; i<n; i++)
  {
        scanf("%d%d%d", &y, &m, &d);
        if (y>maxy)
      {
            maxy=y;maxm=m;maxd=d;
      }
        else if(y==maxy)
        {
            if(m>maxm)
            {
                maxy=y;maxm=m;maxd=d;
            }
            else if(m==maxm)
            {
                if(d>maxd)
                {
                  maxy=y;maxm=m;maxd=d;
                }
            }
        }
        if(y<miny)
        {
            miny=y; minm=m; mind=d;
        }
        else if(y==miny)
        {
            if(m<minm)
            {
                miny=y; minm=m; mind=d;
            }
            else if(m==minm)
            {
                if(d<mind)
                {
                    miny=y; minm=m; mind=d;
                }
            }
        }
    }




    printf("%d %d %d\n%d %d %d\n", maxy, maxm, maxd, miny, minm, mind);
    return 0;
}