// Problem Link: https://codeforces.com/problemset/problem/1992/A
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
        vector<int> v(3);
        for (auto &x : v) cin >> x;
        for (int i = 0; i < 5; i++)
        {
            sort(v.begin(), v.end());
            v[0]++;
        }
        cout << v[0] * v[1] * v[2] << endl;
    }

    return 0;
}