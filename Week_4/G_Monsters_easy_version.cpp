// Problem Link: https://codeforces.com/problemset/problem/1784/A
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
        int n;
        cin >> n;

        vector<int> v1(n);

        for (auto &x : v1) cin >> x;
        sort(v1.begin(), v1.end());

        int p = 1;
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (v1[i] >= p)
            {
                ans += v1[i] - p;
                p++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}