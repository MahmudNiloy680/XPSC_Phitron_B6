// Problem Link: https://codeforces.com/problemset/problem/2043/A
// Author: Mahmud Niloy
// Created: 15-07-2025

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
    tt(T)
    {
        ll x;
        cin >> x;
        ll n = 1;
        while (x > 3)
        {
            x /= 4;
            n*=2;
        }
        cout << n << endl;
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