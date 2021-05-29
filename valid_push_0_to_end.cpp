#include<iostream>
using namespace std;
void push(int a[], int n)
{
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]!=0)
      {
        swap(a[count++],a[i]);
      }
  }
}
void arrange(int a[], int n)
{  
    if(n==1)
       return;

  for(int i=0; i<n-1; i=i+2)
    {
      if(a[i]!=0 && a[i+1]!=0)
        {
          a[i]=a[i]*2;
          a[i+1]=0;
        }
    }
    push(a,n);
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
  for(int i=0;i<n;i++)
  {
    cout<<a[i];
  }
  return 0;
}