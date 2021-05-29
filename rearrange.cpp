#include<bits/stdc++.h>
using namespace std;
void rearrange(int a[], int n)
   
{ 
  int temp[n];
  for(int i=0;i<n;i++)
    {
      temp[i]=a[i];
    }
    sort(temp,temp+n);
  int evenpos=n/2 +1;
  int oddpos=n-evenpos;
   int j=oddpos;
  for(int i=0;i<n;i=i+2)
    {
      a[i]=temp[j];
      j--;
    }
    j=evenpos;
    for(int i=1;i<n;i=i+2)
     {
       a[i]=temp[j];
       j++;
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
   rearrange(a,n);
    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";

    }
    return 0;
}