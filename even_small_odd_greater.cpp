#include<bits/stdc++.h>
using namespace std;
void arrange(int a[], int n)
{
  for(int i=0;i<n-1;i++)
   {
     if(i%2==0 && a[i]>a[i+1])
       {
         swap(a[i],a[i+1]);
       }
     if(i%2!=0 && a[i]<a[i+1])
       {
         swap(a[i],a[i+1]);
       }
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
   return 0;
}