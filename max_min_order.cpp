#include<bits/stdc++.h>
using namespace std; 

void arrange(int a[], int n)
{
  int s=0, l=n-1;
  int flag=true;
  int temp[n];
  for(int i=0;i<n;i++)
  {
    if(flag)
      {
      temp[i]=a[l--];
      }
    else
      {
      temp[i]=a[s++];
      }
    flag=!flag;
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
  arrange(a,n);
  /*for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }*/
  return 0;
}
