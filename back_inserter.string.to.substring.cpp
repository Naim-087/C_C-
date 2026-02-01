#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s1,s2;
  
    getline(cin,s1);
    getline(cin,s2);
    cout<<"first string " <<endl<<s1<<endl;
    cout<<"second string " <<s2<<endl<<endl<<endl;
    copy(s2.begin()+4,s2.begin()+9, back_inserter(s1));
    cout<<"Final String"<<endl<<s1<<endl;




return 0;
}