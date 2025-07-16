// Problem Link: https://codeforces.com/problemset/problem/2030/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt(t)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        ll ans = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());

        ans *= (n - 1);

        cout << ans << endl;
    }

    return 0;
}