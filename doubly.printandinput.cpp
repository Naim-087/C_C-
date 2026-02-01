#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node *prev;
    Node* next;

    Node(int val) {
        this->val = val;
        this->prev=nullptr;
        this->next = nullptr;
    }
};
void insert_at_head(Node *&head)
{
    Node *newnode = new Node(99);
    newnode->next= head;
    head->prev= newnode;
    head = newnode;
}
void insert_at_tail(Node *&head,Node *&tail,int val)
{
  Node *newnode = new Node(val);
  if(head==NULL)
  {
    head=tail=newnode;
  }
  else
  {
    tail->next=newnode;
    tail = newnode;
  }


}
void print_forward(Node *&head)
{
    Node *temp= head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->"<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void print_backward(Node *&tail)
{
    Node *temp = tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->"<<" ";
        temp= temp->prev;
    }
     cout<<"NULL"<<endl;
}
int main() {
    Node *head = NULL;
    Node *tail =NULL;
    int val;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
         insert_at_tail(head,tail,val);
    }
   
  
   print_forward(head);
   
    return 0;
}