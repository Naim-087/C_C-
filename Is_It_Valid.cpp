#include <bits/stdc++.h>
using namespace std;


class MyStack {
    int arr[1000];
    int topIndex;
public:
    MyStack() {
        topIndex = -1;
    }
    void push(int val) {
        arr[++topIndex] = val;
    }
    void pop() {
        if (topIndex >= 0) topIndex--;
    }
    int top() {
        return arr[topIndex];
    }
    bool empty() {
        return topIndex == -1;
    }
};


class MyQueue {
    int arr[1000];
    int frontIndex, rearIndex;
public:
    MyQueue() {
        frontIndex = 0;
        rearIndex = 0;
    }
    void push(int val) {
        arr[rearIndex++] = val;
    }
    void pop() {
        if (frontIndex < rearIndex) frontIndex++;
    }
    int front() {
        return arr[frontIndex];
    }
    bool empty() {
        return frontIndex == rearIndex;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    MyStack stack;
    MyQueue queue;

    
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        stack.push(val);
    }

    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        queue.push(val);
    }

   
    while (!stack.empty() && !queue.empty()) {
        if (stack.top() != queue.front()) {
            cout << "NO" << endl;
            return 0;
        }
        stack.pop();
        queue.pop();
    }

    
    if (stack.empty() && queue.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
