#include <bits/stdc++.h>
using namespace std;

int main() {
    
    queue<int> queue;
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
}