#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//when taking string input 
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    string temp;
    
    temp = s;
    reverse(s.begin(),s.end());
    if(temp==s)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"Not palindrome"<<endl;
    }
}