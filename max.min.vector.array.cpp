#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<v.size();i++)
   {
    cin>>v[i];
   }

    // Find maximum
    int max_val = *max_element(v.begin(), v.end());

    // Find minimum
    int min_val = *min_element(v.begin(), v.end());

    cout << "Max: " << max_val << endl;
    cout << "Min: " << min_val << endl;

    return 0;
}
