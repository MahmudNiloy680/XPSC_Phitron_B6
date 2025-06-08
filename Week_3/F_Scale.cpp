#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<string> v(n);
        for (auto &s : v) cin >> s;

        for (int i = 0; i < n; i+= k)
        {
            for (int j = 0; j < n; j+= k)
                cout << v[i][j];
            cout << endl;
        }

    }

    return 0;
}