#include<bits/stdc++.h>
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
    sort(v.begin(),v.end());
    int size = unique(v.begin(),v.end())-v.begin();
    cout<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }




return 0;
}