#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    map<char,int> mp;
    mp['a']=2;mp['b']=2;mp['c']=2;mp['d']=3;mp['e']=3;mp['f']=3;
    mp['g']=4;mp['h']=4;mp['i']=4;mp['j']=5;mp['k']=5;mp['l']=5;
    mp['m']=6;mp['n']=6;mp['o']=6;mp['p']=7;mp['q']=7;mp['r']=7;mp['s']=7;
    mp['t']=8;mp['u']=8;mp['v']=8;mp['w']=9;mp['x']=9;mp['y']=9;mp['z']=9;
	int t;
    cin>>t;
    while(t--)
    {
       int m,n;
       cin>>n>>m;
       vector <int> num,num1;
       vector <string> alpha;
       for(int i=0;i<n;i++)
       {
          int n1;
          cin>>n1;
          num.push_back(n1);
          num1.push_back(0);
       }
       for(int i=0;i<m;i++)
       {
          string m1;
          cin>>m1;
          alpha.push_back(m1);
       }
       for(int i=0;i<m;i++)
       {
          int sum=0;
          for(int i1=0;i1<alpha[i].size();i1++)
          {
              sum=sum*10+mp[alpha[i][i1]];
          }
          for(int i1=0;i1<n;i1++)
          {
              if(num[i1]==sum) num1[i1]++;
          }
       }
       for(int i=0;i<num1.size();i++)
       {
           cout<<num1[i]<<endl;
       }

    }

    return 0;
}
