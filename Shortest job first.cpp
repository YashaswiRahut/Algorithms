#include <iostream>
using namespace std;
int main()
{
	int f[20],a[20],k;
  	float awt=0,att=0;
  	int i,n,wt=0,ct=0,j;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>f[i];
    a[i]=i+1;
  }
  for(i=1;i<n;i++)
  {
    for(j=1;j<n;j++)
    {
      if(f[j-1]>f[j])
      {
        k=f[j-1];
        f[j-1]=f[j];
        f[j]=k;
        k=a[j-1];
        a[j-1]=a[j];
        a[j]=k;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    if(i)
    	wt+=f[i-1];
    awt+=wt;
    ct+=f[i];
    att+=ct;
    cout<<"\nF"<<a[i]<<" "<<f[i]<<" "<<wt<<" "<<ct;
  }
  cout<<"\nAverage Waiting Time:"<<awt/n;
  cout<<"\nAverage Turnaround Time:"<<att/n;
	return 0;
}
