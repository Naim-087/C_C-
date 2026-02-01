#include <bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int>v;//dynamic array
    void  push(int val)
    {
      v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int  top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
       return v.empty();
    }
};

int main() {
    myStack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    cout<<stack.top()<<endl;
    stack.pop();
    cout<<stack.top()<<endl;
    stack.pop();
    stack.pop();
    cout<<stack.top()<<endl;
    stack.pop();
    if(stack.empty()==false)
  
    cout<<stack.top()<<endl;
    return 0;
}