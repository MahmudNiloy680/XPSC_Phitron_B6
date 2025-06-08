// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define tt(x) int x; cin >> x; while (x--)

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, m;
//     cin >> n >> m;

//     vector<int> a(n), b(m);
    
//     for (auto &x : a) cin >> x;
//     for (auto &x : b) cin >> x;

//     int l = 0, r = 0;
//     ll ans = 0;

//     while (l < n && r < m)
//     {
//         int cur = a[l], cnt1 = 0, cnt2 = 0;
//         while (l < n && a[l] == cur)
//         {
//             cnt1++; l++;
//         }
//         while (r < m && cur > b[r]) r++;
//         while (r < m && b[r] == cur)
//         {
//             r++; cnt2++;
//         }
//         ans += (1ll * cnt1 * cnt2);
//     }
//     cout << ans;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    map<ll, ll> a,b;
    while (n--)
    {
        ll x; cin >> x;
        a[x]++;
    }
    while (m--)
    {
        ll x; cin >> x;
        b[x]++;
    }

    ll cnt = 0;
    for (auto [x, y] : a)
        cnt += y*b[x];

    cout << cnt << nl;
    return 0;
}