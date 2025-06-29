// Problem Link: https://codeforces.com/problemset/problem/1883/B
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
    tt(t)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int odd = 0, freq[26] = {0};

        for (char c : s)
            freq[c - 'a']++;

        for (int i : freq)
        {
            if (i != 0  && i % 2 != 0)
                odd ++;
        }
        cout << ((k >= odd - 1) ? "YES\n" : "NO\n");
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