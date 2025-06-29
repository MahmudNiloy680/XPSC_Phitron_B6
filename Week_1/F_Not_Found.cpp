// Problem Link: https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
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
    int freq[26] = {0};

    cin >> s;

    for (char c : s)
        freq[c - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            cout << (char)('a' + i) << endl;
            return 0;
        }
    }
    cout << "None\n";
    
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}