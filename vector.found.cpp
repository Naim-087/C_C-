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
    auto it = find(v.begin(),v.end(),79);
    if(it == v.end())
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }


return 0;
}