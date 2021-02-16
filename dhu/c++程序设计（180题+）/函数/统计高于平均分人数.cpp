#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int ReadScore(double score[40]);
double Average(double score[40],int n);
double AboveAverage(double score[40],int n,double aver);

int main ()
{
  double score[40];
  int n,i,count;
  double aver;
  n=ReadScore(score);
  aver=Average(score,n);
  count=AboveAverage(score, n, aver);
  cout<<count;

  return 0;
}

int ReadScore(double score[40])
{
  int i,a,b,c,n;
  for(i=0;i<40;i++)
  {
    cin>>score[i];
    if(score[i]<0) break;
  }
  return i;
}

double Average(double score[40],int n)
{
  int i;
  double a,sum=0;
  for(i=0;i<n;i++)
  {
    sum+=score[i];
  }
  a=sum/n;
  return a;
}

double AboveAverage(double score[40],int n,double aver)
{
  int i,out=0;
  for(i=0;i<n;i++)
  {
    if(score[i]>aver)
    {
      out++;
    }
  }
  return out;
}
