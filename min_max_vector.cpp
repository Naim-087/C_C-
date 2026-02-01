#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int  n; 
    vector<int>v(n);
    for(int i=0;i<v.size();i++)
    {
         cin>>v[i];
    }         
    cout<<"MAX = "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"MIN = "<<*min_element(v.begin(),v.end())<<endl;


return 0;
}