#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool cmp(int a,int b)
{
  return a>b;
}

int main ( )
{
  int n,m;
  while(cin>>n>>m)
  {
    vector <int> dragon,knight;
    int d;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        dragon.push_back(d);
    }
    for(int i=0;i<m;i++)
    {
        cin>>d;
        knight.push_back(d);
    }
    sort(dragon.begin(),dragon.end(),cmp);
    sort(knight.begin(),knight.end(),cmp);
    bool bo=1;
    int money=0;
    if(m<n) cout<<"Lose!"<<endl;
    else{
        for(int i=0;i<dragon.size();i++)
        {
            if(dragon[i]>knight[i]) {cout<<"Lose!"<<endl;bo=0;break;}
        }
        if(bo)
        {
          for(int i=0;i<dragon.size();i++)
          {
              for(int i1=0;i1<knight.size();i1++)
              {
                  if(knight[i1]>dragon[i]) 
                  {
                      if(i1==knight.size()-1) {money+=knight[i1];break;}
                  }
                  else if(knight[i1]==dragon[i]){
                     money+=knight[i1];
                     knight.erase(knight.begin()+i1);
                     break;
                  }
                  else{
                      money+=knight[i1-1];
                      knight.erase(knight.begin()+i1-1);
                      break;
                  }
              }
          }
          cout<<money<<endl;
        }
    }
  }

    return 0;

}
 