#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll ans = 0;
    // ll ans = (n/a)*p + (n/b)*q - (n/(a*b))*min(p, q);

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (i % (a*b) == 0) ans += max(p,q);
        else if (i % a == 0) ans += p;
        else if (i % b == 0) ans += q;
    }

    cout << ans << nl;

    return 0;
}