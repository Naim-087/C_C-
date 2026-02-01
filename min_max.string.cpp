#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    cout<<"MAX = "<<*max_element(s.begin(),s.end())<<endl;
    cout<<"MIN = "<<*min_element(s.begin(),s.end())<<endl;
    
    return 0;
}