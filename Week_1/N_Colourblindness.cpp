// Problem Link: https://codeforces.com/problemset/problem/1722/B
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
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R' || b[i] == 'R')
            {
                if (a[i] != b[i])
                {
                    flag = false;
                    break;
                }
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
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