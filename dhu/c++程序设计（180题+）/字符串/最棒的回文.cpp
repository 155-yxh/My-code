#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str,a,ans_str;
   int i,j,k,flag,len;
	char t;len=0;
   while(cin.get(t))
   {
      str.push_back(t);
      len++;
   }
	a=str;
	for(i=0;i<len;i++)
   {
		str[i]=toupper(str[i]);
   }
   int ans=1;
	ans_str=a[0];
	for(i=1;i<len-1;i++)
   {
      int begin=i-1;
      int end=i+1;  
		int leap,start=i,s1=i,s2=i;
		if(str[i]>='A'&&str[i]<='Z') leap=1;
		else leap=0;
		while(1)
      {
			if(str[begin]>='A'&&str[begin]<='Z')
         {
				if(str[end]>='A'&&str[end]<='Z')
            {
					if(str[begin]==str[end])
               {
						s1=start=begin; s2=end;  
                  leap+=2;
						begin--;
                  end++;
					}
					else break;
				}
				else
            {
					end++;
					if(end==len) break;
				}
			}
			else
         {
				begin--;
				if(begin==-1)  break;
			}
		}
		if(ans<leap)
      {
			ans=leap;
			ans_str=a.substr(s1,s2-s1+1);
		}
	}
	for(i=0;i<len-1;i++)
   {
      int begin=i , end=i+1;  
		int start=i,leap=0,s1=i,s2=i+1;
		while(1)
      {
			if(str[begin]>='A'&&str[begin]<='Z')
         {
				if(str[end]>='A'&&str[end]<='Z')
            {
					if(str[begin]==str[end])
               {
						s1=start=begin; s2=end; 
                  leap+=2;
						begin--;
                  end++;
					}
					else break;
				}
			   else
            {
					end++;
					if(end==len) break;
				}
			}
			else
         {
				begin--;
				if(begin==-1)  break;
			}
		}
		if(ans<leap)
      {
			ans=leap;
			ans_str=a.substr(s1,s2-s1+1);
		}
	}
	cout<<ans<<endl;
	cout<<ans_str<<endl;

    return 0;
}