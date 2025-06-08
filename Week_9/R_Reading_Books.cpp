#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    ll sum = 0;
    for (int i = 0; i < n - 1; i++)
        sum += a[i];
    if (a[n-1] >= sum) cout << 2*a[n-1];
    else cout << sum + a[n-1];

    cout << nl;
    return 0;
}