#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int missing = -1;

        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i + 1] - v[i] > 1)
            {
                missing = v[i] + 1;
                break;
            }
        }

        cout << missing << endl;
    }

    return 0;
}
