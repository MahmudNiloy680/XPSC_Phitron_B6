#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) ll x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    map<int, int> mp;
    while (n--)
    {
        int x; cin >> x;
        mp[x]++;
    }

    int ans = 0;
    for (auto [x, y] : mp)
        ans = max(ans, y);
    
    cout << ans << nl;

    return 0;
}