#include <bits/stdc++.h>
using namespace std;
class myQueue
{
    public:
    list<int>list;
    void push(int val)
    {
        list.push_back(val);
    }
      void pop()
    {
        list.pop_front();
    }
    int fornt()
    {
        return list.front();
    }
    int back()
    {
        return list.back();
    }
    bool empty()
    {
        return list.empty();
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
   while(!queue.empty())//not empty
   {
      cout<<queue.fornt()<<endl;
      queue.pop();
   }


    
    return 0;
}