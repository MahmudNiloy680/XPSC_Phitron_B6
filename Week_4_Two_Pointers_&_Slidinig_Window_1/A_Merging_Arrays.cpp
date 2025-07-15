// Problem Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);

    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    a.push_back(INT_MAX);
    b.push_back(INT_MAX);

    vector<int> c;

    int i = 0, j = 0;
    while (i < n || j < m)
    {
        if (a[i] < b[j])
        {
            c.push_back(a[i]); i++;
        }
        else
        {
            c.push_back(b[j]); j++;
        }
    }

    for (int i : c) cout << i << " ";
    return 0;
}