// Problem Link: https://codeforces.com/problemset/problem/1997/A
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
    char freq[26] = {0};
    for (int i = 0; i < 26; i++)
        freq[i] = 'a' + i;
    
    tt(t)
    {
        string s;
        cin >> s;
    
        int n = s.size();
        bool flag = 0;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                char ins = (s[i] == 'z') ? 'a' : s[i] + 1;
                s.insert(s.begin() + i, ins);
          
                flag = 1; break;
            }
        }

        if (!flag)
            s.push_back(s.back() == 'z' ? 'a' : s.back() + 1);
        
        cout << s << endl;
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