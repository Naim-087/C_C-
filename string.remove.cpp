#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c)
{
    return (c=='a'|| c=='e'||c=='i'||c=='o'||c==
    'u');

}
int main ()
{
    string s,ans;
    getline(cin,s);
    for(auto x : s){
        char c = tolower(x);
        if(isVowel(c)==0)//vowel hole 0 return kortese er na hole 1 return kortese 
                         //returning 0 means it wont come into main function 
        {
        ans= ans+'.';
        ans = ans + c;

        }
    }
    cout<<ans<<endl;

return 0;
}