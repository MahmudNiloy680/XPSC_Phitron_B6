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
        int n; cin >> n;
        set<int> s;
        multiset<int> ml;
        vector<int> v(n);
        for (auto &x : v)   cin >> x;
        int gcd_odd = v[1];
        int gcd_even = v[0];
        bool flg1 = 0, flg2 = 0;
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0) gcd_even = __gcd(gcd_even, v[i]);
            else gcd_odd = __gcd(gcd_odd, v[i]);
        }
        for (int i = 0; i < n; i+= 2)
        {
            if (v[i] % gcd_odd == 0)
            {
                flg1 = 1; break;
            }
        }

        for (int i = 1; i < n; i+= 2)
        {
            if (v[i] % gcd_even == 0)
            {
                flg2 = 1; break;
            }
        }

        if (flg1 && flg2) cout << 0;
        else if (flg1) cout << gcd_even;
        else cout << gcd_odd;

        cout << nl;
    }

    return 0;
}
