// Problem Link: https://codeforces.com/problemset/problem/2055/A
// Author: Mahmud Niloy
// Created: 30-06-2025

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
    tt(t)
    {
        int n, a, b;
        cin >> n >> a >> b;
        cout << ((a - b)%2 == 0 ? "YES" : "NO") << endl;
    }
    
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}