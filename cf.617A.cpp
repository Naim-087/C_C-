#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    if(x%5==0)//maximum step is five , so everytime it will take the max steps.a
    {
        cout<<x/5;
    }
    else
    {
        cout<<x/5+1<<endl;
    }

return 0;
}