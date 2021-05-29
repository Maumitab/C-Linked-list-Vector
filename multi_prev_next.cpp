#include<bits/stdc++.h>
using namespace std;
void change(int a[], int n)
{
  int temp[n];
  temp[0]=a[0]*a[1];
   temp[n-1]=a[n-1]*a[n-2];
   for(int i=1;i<n-1;i++)
    {
      temp[i]=a[i-1]*a[i+1];
    }
    for(int i=0;i<n;i++)
    {
      a[i]=temp[i];
    }
    for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  change(a,n);
  
  return 0;
}