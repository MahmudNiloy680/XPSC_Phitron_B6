// Problem Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    int l = 0, r = 0, cnt = 0;
    
    while (r < m)
    {
        if (l < n && a[l] < b[r]) 
        {
            cnt++; l++;
        }
        else
        {
            cout << cnt << " ";
            r++;
        }
    }

    return 0;
}