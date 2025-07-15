// Problem Link: https://codeforces.com/problemset/problem/1498/B
// Author: Mahmud Niloy
// Created: 12-07-2025

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
        int n, w;
        cin >> n >> w;
        multiset<int>  p1;

        while (n--)
        {
            double x; cin >> x;
            p1.insert(x);
        }
        int shlv = 0;
        while (!p1.empty())
        {
            int s = w;
            while (1)
            {
                auto it = p1.upper_bound(s);
                if (it == p1.begin()) break;
                else s -= *(--it);
                p1.erase(it);
            }
            shlv++;
        }
        cout << shlv << endl;
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