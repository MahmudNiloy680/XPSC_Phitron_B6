// Problem Link: https://codeforces.com/problemset/problem/918/B
// Author: Mahmud Niloy
// Created: 01-07-2025

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
    int n, m;
    cin >> n >> m;
    map<string, string> ip_name;
    while (n--)
    {
        string name, ip;
        cin >> name >> ip;
        ip_name[ip] = name;
    }
    while (m--)
    {
        string cmd, ip;
        cin >> cmd >> ip;
        ip.pop_back();
        cout << cmd << " " << ip << "; #" << ip_name[ip] << endl;
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