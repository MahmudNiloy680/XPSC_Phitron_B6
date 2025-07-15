// Problem Link: https://codeforces.com/problemset/problem/1857/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) ll x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt(t)
    {
        int n; cin >> n;

        int m = n*(n-1)/2;
        vector<int> b(m);

        for (auto &x : b) cin >> x;

        sort(b.begin(), b.end());

        for (int i = 0; i < m; i += --n)
            cout << b[i] << " ";

        cout << "1000000000" << nl;
    }
    return 0;
}