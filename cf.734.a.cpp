#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int cnta=0,cntd=0;
    while(n--)
    {
        char ch;
        cin>>ch;
        if(ch=='A')
        {
            cnta++;
        }
        else
        cntd++;
    }
    if(cnta>cntd)
    {
        cout<<"Anton"<<endl;

    }
    else if(cnta==cntd)
    {
        cout<<"Friendship"<<endl;
    }
    else
    cout<<"Danik"<<endl;

return 0;
}