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
     //convert vector to string 
    string s ="";

    for(int i=0;i<n;i++)
    {
        s= s + to_string (v[i]);//adding v[i] end of s1 string as string
     if(i!=(n-1)) s=s+" ";

    }
    cout<<"String  " <<s<<" ";
    cout<<endl<<endl;
    string s1;
    cin.ignore();
    getline(cin,s1);
    int a = stoi(s1);
    cout<<"Integer " <<a<<endl;

   
return 0;
}