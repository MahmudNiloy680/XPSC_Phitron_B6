// Problem Link: https://codeforces.com/problemset/problem/903/C
// Author: Mahmud Niloy
// Created: 01-07-2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define tt(x) ll x; cin >> x; while (x--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"


void solve()
{
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
    
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}