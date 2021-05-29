#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector <T> &v)
{
  for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
  vector<int> vec1;
  vector<char> vec2(4);
  vector<char> vec3(vec2);
  vector<int> vec4(6,3);
  vec2.push_back('5');
  display(vec4);
  return 0;
}