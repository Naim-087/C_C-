#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // First input: how many elements
    vector<int> naim;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        naim.push_back(x); // Add elements to the vector
    }

    for (int i = 0; i < naim.size(); i++) {
        cout << naim[i] << " ";
    }
    cout<<endl<<endl;
    naim.insert(naim.begin()+2,99);
    for (int i = 0; i < naim.size(); i++) {
        cout << naim[i] << " ";
    }


    return 0;
}
