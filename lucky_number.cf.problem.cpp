#include<bits/stdc++.h>
using namespace std;
int main ()
{
   string s;
   cin>>s;
   int is_lucky1 = 0;int is_lucky2 = 0;
   
   for(int i=0;i<s.size();i++)
   {
      if(s[i]=='4')
      {
          is_lucky1 ++ ;
          
         
      }
      else if(s[i]=='7')
      {
         is_lucky2++;
      }
  
   }
  if(is_lucky1+is_lucky2==4 || is_lucky1+is_lucky2==7)
  {
   cout<<"YES"<<endl;
  }
  else
  {
   cout<<"NO"<<endl;
  }
   
  
     
   
}