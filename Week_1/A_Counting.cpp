// Problem Link: https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
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
    ll a, b;
    cin >> a >> b;
    cout << ((a < b) ? b-a+1 : 0) << endl; 
    
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}