#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
  int ti;
  cin>>ti;
  while(ti--)
  {
	  string a,b,ax="a",bx="a",re;
    cin>>a>>b;
    int pos;
    pos=a.find('.');
    if(pos>-1)
    {
        ax=a.substr(pos+1);
        a.erase(a.begin()+pos,a.end());
    }
    pos=b.find('.');
    if(pos>-1) 
    {
        bx=b.substr(pos+1);
        b.erase(b.begin()+pos,b.end());
    }
    int up=0,sum=0;
    if(bx!="a"&&ax!="a")
    {
       int axs=ax.size();
       int bxs=bx.size();
       int sizemin=min(axs,bxs);
       if(axs>sizemin)
       {
         re=ax.substr(sizemin);
         reverse(re.begin(),re.end());
         ax.erase(ax.begin()+sizemin,ax.end());
       }
       else if(bxs>sizemin)
       {
         re=bx.substr(sizemin);
         reverse(re.begin(),re.end());
         bx.erase(bx.begin()+sizemin,bx.end());
       }
       axs=ax.size();
       bxs=bx.size();
       for(int i=1;i<=sizemin;i++)
       {
         sum=up+ax[axs-i]-'0'+bx[bxs-i]-'0';
         up=sum/10;
         sum=sum%10;
         re.push_back(sum+'0');
       }
       re.push_back('.');
    }
    else if(ax!="a"&&bx=="a")
    {
       reverse(ax.begin(),ax.end());
       re=ax;
       re.push_back('.');
    }
    else if(ax=="a"&&bx!="a")
    {
       reverse(bx.begin(),bx.end());
       re=bx;
       re.push_back('.');
    }
       int as=a.size();
       int bs=b.size();
       int sizemin=min(as,bs);
       for(int i=1;i<=sizemin;i++)
       {
         sum=up+a[as-i]-'0'+b[bs-i]-'0';
         up=sum/10;
         sum=sum%10;
         re.push_back(sum+'0');
       }
       while(as>sizemin)
       {
           sum=up+a[as-sizemin-1]-'0';
           up=sum/10;
           sum=sum%10;
           re.push_back(sum+'0');
           sizemin++;
       }
       while(bs>sizemin)
       {
           sum=up+b[bs-sizemin-1]-'0';
           up=sum/10;
           sum=sum%10;
           re.push_back(sum+'0');
           sizemin++;
       }
       if(up>0) re.push_back(up+'0');
      while(re[0]=='0'||re[0]=='.')
      {
         re.erase(re.begin());
      }
      int a1=re.size() ;
      for(int i1=a1-1;i1>=0;i1--)
      {
        cout<<re[i1];
      }
      cout<<endl;
  }

    return 0;
}