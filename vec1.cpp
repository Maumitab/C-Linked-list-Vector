#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &vec1)
{
  for(int i=0;i<vec1.size();i++)
  {
    cout<<vec1[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  vector<int> vec1;
  int element, size;
  cout<<" enter size";
  cin>>size;
  for(int i=0;i<size;i++)
  {
    cout<<" enter element";
    cin>>element;
    vec1.push_back(element);
  }
  display(vec1);
  return 0;
}