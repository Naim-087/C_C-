#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int>stack;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        stack.push(val);
    }
    while(!stack.empty())//loop will run till the stack is empty
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
}