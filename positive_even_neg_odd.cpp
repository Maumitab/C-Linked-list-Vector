#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
   int temp[n], semp[n];
   for(int i=0;i<n;i++)
   {
    if(a[i]>=0)
      {
        temp[i]=a[i];
      }
    else
      {
        semp[i]=a[i];
      }
   }
   int even=0, odd=1;
    for(int i=0;i<n;i++)
     {
       if(even==n || odd==n)
         return 1;

         a[even]=temp[i];
         a[odd]=semp[i];
      even=even+2;
      odd=odd+2;
     }

     for(int i=0;i<n;i++)
     {
       cout<<a[i]<<" ";
     }
     return 0;
}