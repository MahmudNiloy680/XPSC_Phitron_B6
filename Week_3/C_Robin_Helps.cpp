// Problem Link: https://codeforces.com/problemset/problem/2014/A
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;
        int has = 0;
        int gives = 0;
        for (auto i : v)
        {
            if (i >= k) has += i;
            else if (i == 0)
            {
                if (has > 0)
                {
                    has--; gives++;
                }
            }
        }
        cout << gives << endl;
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