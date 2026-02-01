#include<bits/stdc++.h>
using namespace std;


int stringmod(string num, int divisor) {
    int remainder = 0;
    for (char digit : num) {
        remainder = (remainder * 10 + (digit - '0')) % divisor;
    }
    return remainder;
}

int main() {
    string n;
    cin >> n;

    vector<int> families = {3, 4, 5, 6, 8, 9, 11, 12};

    for (int f : families) {
        if (stringmod(n, f) == 0) {
            cout << f << "-AmoriteBrother" << endl;
        }
    }

    return 0;
}

