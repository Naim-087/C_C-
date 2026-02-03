#include<bits/stdc++.h>
using namespace std;

int main()
{    
    cout<<"Enter an array : "<<endl;
    int n; cin>>n;
    int array[n];
   
    
    
    for(int i =0;i<n;i++)
    {
        cin>>array[i];
    }
     
    int found = 0;
    int target;
    cout<<"Enter you target : ";
    cin>>target;
    for(int i=0;i<n;i++){

        if(array[i]==target)
        {
            found=1;
            break;
        }
    }

    if(found==1) cout<<"Found "<<endl;
    else cout<<"Not Found "<<endl;


    return 0;
}