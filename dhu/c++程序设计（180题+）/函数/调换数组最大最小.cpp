#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int FindMax(int score[],int n);

int FindMin(int score[],int n);

void ReadScore (int score[], int n);

int main ()
{
int i,j,a,b,n;
cin>>n;
int score[n];
ReadScore(score,n);
a=FindMax(score,n);
b=FindMin(score,n);
i=score[a];
score[a]=score[b];
score[b]=i;
cout<<score[0];
for (j=1;j<n;j++)
cout<<" "<<score[j];

return 0;
}

void ReadScore (int score[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    cin>>score[i];
  }
}

int FindMax(int score[],int n)
{
  int i,max,a;
  max=score[0];
  a=0;
  for(i=0;i<n;i++)
  {
    if(score[i]>max) 
    {
      max=score[i];
      a=i;
    }
  }
  return a;
}

int FindMin(int score[],int n)
{
  int i,min,a;
  min=score[0];
  a=0;
  for(i=0;i<n;i++)
  {
    if(score[i]<min) 
    {
    min=score[i];
    a=i;
    }
  }
  return a;
}
