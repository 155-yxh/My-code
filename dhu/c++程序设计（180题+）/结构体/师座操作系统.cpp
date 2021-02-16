#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
	map <string,string> mp1;
	map <string,int> mp2;//判断是否为快捷方式
	string cz,FileName,FileInfo;
	int FileType;
	while(cin>>cz)
	{
		if(cz=="exit") break;
		if(cz=="create")
		{
			cin>>FileName>>FileType>>FileInfo;
            mp1[FileName]=FileInfo;
			mp2[FileName]=FileType;
		}
        else if(cz=="open")
		{
           cin>>FileName;
		   while(mp2[FileName]!=0)
		   {
			   FileName=mp1[FileName];
		   }
		   cout<<mp1[FileName]<<endl;
		}
	}
    return 0;
}