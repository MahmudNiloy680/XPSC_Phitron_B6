#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt(t)
    {
        int n, k; string s;
        cin >> n >> k >> s;

        int r = 0, cnt = 0;
        while (r < n)
        {
            if (s[r] == 'B')
            {
                r += min(k, n - r);
                cnt++;
            }
            else r++;
        }

        cout << cnt << nl;
    }

    return 0;
}