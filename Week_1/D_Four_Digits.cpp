// Problem Link: https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
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
    string s;
    cin >> s;

    if (s.size() < 4)
    {
        for (int i = 0; i < 4 - s.size(); i++)
            cout << "0";
        cout << s;
    }
    else
        cout << s;

    cout << endl;
    
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}