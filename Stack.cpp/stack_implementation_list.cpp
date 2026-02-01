#include <bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    list<int>list;//dynamic array
    void  push(int val)
    {
      list.push_back(val);
    }
    void pop()
    {
        list.pop_back();
    }
    int  top()
    {
        return list.back();
    }
    int size()
    {
        return list.size();
    }
    bool empty()
    {
       return list.empty();
    }
};

int main() {
    myStack stack;
    int n;cin>>n;
   for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        stack.push(val);
    }
    while(!stack.empty())//till the stack is empty loop will continue
    {
        cout<<stack.top()<<endl;
        stack.pop();
    }
}