#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    vector<int>temp;
    temp=v;
    reverse(v.begin(),v.end());
    
    if(v==temp)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
   
    return 0;
}
