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
void delete_at_head(Node *&head, Node *&tail)
{
    Node *temp = head;
    head = head->next;
     delete temp;
    if(head == NULL)
    {
        tail= NULL;
        return;
    }
    head->prev=NULL;
   
   
}
void delete_at_tail(Node *&head,Node *&tail)
{
  Node *temp = tail;
  tail = tail->prev;
  
  delete temp;
  if(tail==NULL)
  {
    head==NULL;
    return;
  }
tail->next=NULL;
}
void delete_at_any_pos(Node *&head,int index)
{
    Node *temp = head;
    for(int i=0;i<index;i++)
    {
        temp = temp->next;
    }
    Node *deletenode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev= temp;
    delete deletenode;
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
    
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(99);
    Node *c = new Node(78);
    Node *tail = new Node(30);

    head->next= a;
    a->prev = head;
    a->next=b;
    b->prev = a;
    b->next=c;
    c->prev=b;
    c->next=tail;
    tail->prev=c;
    tail->next=NULL;
    print_forward(head);
   delete_at_head(head,tail);
  
   print_forward(head);
   delete_at_tail(head,tail);
   print_backward(tail);
   delete_at_any_pos(head,2);
  // print_forward(head);
   delete_at_any_pos(head,2);
   print_forward(head);
    return 0;
}