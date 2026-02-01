#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(), s.begin(), ::tolower);
  
   cout<<s<<endl;
   transform(s.begin(),s.end(),s.begin(),::toupper );
   cout<<s<<endl;
   int n ;
   vector<int>v(n);
   for(int i=0;i<v.size();i++){
    cin>>v[i];
   }
   //convert vector to string 
  string s1="";
  
  for(int i=0;i<n;i++)
  {
     s1=s1+ to_string(v[i]);//adding v[i] end of s1 string as string
     if(i!=n-1)
     {
        s1=s1+" ";
     }
  }

return 0;
}