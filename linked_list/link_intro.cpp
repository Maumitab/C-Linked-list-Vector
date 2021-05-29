#include<bits/stdc++.h>
using namespace std;
class node
{
  public:
  int data;
  node* next;
};
int main()
{
   node* head=NULL;
   node* first=NULL;
   node* second=NULL;
    head = new node();
    first =new node();
    second=new node();
     
     head->data=0;
     head->next=first;
     first->data=1;
     first->next=second;
     second->data=2;
     second->next=NULL;

     while(head!=NULL)
     {
       cout<< head->data<<" ";
       head=head->next;
     }
     return 0;
}