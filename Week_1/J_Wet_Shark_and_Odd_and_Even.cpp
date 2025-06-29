// Problem Link: https://codeforces.com/problemset/problem/621/A
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
    int n;
    cin >> n;

    priority_queue<int> odd;
    priority_queue<int> even;
    int ct_odd = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x % 2 != 0)
        {
            ct_odd++;
            odd.push(x);
        }
        else
            even.push(x);
    }
    
    long long sum = 0;
    while (!even.empty())
    {
        sum += even.top();
        even.pop();
    }
    while (!odd.empty())
    {
        if (ct_odd % 2 != 0 && odd.size() == 1)
            break;
        sum += odd.top();
        odd.pop();
    }

    cout << sum << endl;
    
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}