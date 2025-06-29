// Problem Link: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
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
    int n, x;
    cin >> n >> x;
    vector<int> a;

    while (n--)
    {
        int r;
        cin >> r;
        if (r == x)
            continue;
        a.push_back(r);
    }

    for (int i : a)
        cout << i << " ";
    
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}