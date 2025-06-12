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
        int n, m; cin >> n >> m;
        vector<int> a(n + 1);
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            string x; cin >> x;
            a[i] = a[i - 1] + x.size();
        }

        int ans = -1;

        for (int i : a)
        {
            if (i > m) break;
            ans++;
        }

        cout << ans << nl;
    }

    return 0;
}