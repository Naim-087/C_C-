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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        stack.push(val);
    }
    for(int i=0;i<n;i++)
    {
        cout<<stack.top()<<endl;
        stack.pop();
    }
}