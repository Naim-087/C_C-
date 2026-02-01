#include<bits/stdc++.h>
using namespace std;
//L-1.Class2 . Recorded course, CPS
int main ()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    int sreeja =0, dima =0 , turnfast = 1;//turnfast==1 means sreeja will take first
    while(!v.empty())//till the element being zero by reducing the card number
    {
        if(turnfast == 1)
        {
            if(v[0]>v.back())
            {
                sreeja+=v[0];
                v.erase(v.begin());
            }
            else
            {
               sreeja+=v.back();
               v.pop_back();
            }
            turnfast=2;
        }
       
        else
        {
            if(v[0]>v.back())
            {
                dima+=v[0];
                v.erase(v.begin());
            }
            else
            {
              dima+=v.back();
              v.pop_back();
            }
            turnfast=1;

        }
        
    }
    cout<<sreeja <<" "<<dima<<endl;



return 0;
}