#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};
class myQueue
{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    void push(int val)
    {
        Node *newnode = new Node (val);
         if(head==NULL)
        {
            head=tail=newnode;
        }
        else 
        {
        tail->next= newnode;
        tail = newnode; 
        }
       
    }
    void pop()
    {
        
        Node *temp = head;
        head= head->next;
        delete temp;
        if(head==NULL)
        {
            tail=NULL;
        }
        
    }
    int front()
    {
        return head->val;
    }
   int back()
   {
    return tail->val;
   }
   
   
   bool empty()
   {
    return head==NULL;
   }
};



int main() {
    myQueue queue;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        queue.push(val);
    }
    while(!queue.empty())
    {
        cout<<queue.front()<<endl;
        queue.pop();
    }
    return 0;
}