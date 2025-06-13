#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        ll n, s; cin >> n >> s;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        ll l = 0, r = 0, sum = 0;

        ll ans = 0;
        while (r < n)
        {
            sum += a[r];
            if (sum <= s)
                ans = max(ans, r - l + 1);
            else
                sum -= a[l], l++;
            r++;
        }

        cout << ans << nl;

    return 0;
}