#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<v.size();i++){

        cin>>v[i];
    }
    replace(v.begin(),v.end(),5,45);
    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";
    }
    replace(v.begin(),v.end(),5,45);
    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";
    }
               

 



return 0;
}