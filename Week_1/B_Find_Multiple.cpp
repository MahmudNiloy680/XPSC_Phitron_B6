// Problem Link: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
// Author: Mahmud Niloy
// Created: 29-06-2025

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
    ll a, b, c;
    cin >> a >> b >> c;

    ll t = a/c;
    ll r = c*(t+1);

    if (a % c == 0)
        cout << a;
    else if (r <= b)
        cout << r;
    else 
        cout << -1;
    
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}