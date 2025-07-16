// Problem Link: https://codeforces.com/problemset/problem/1991/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt(t)
    {
        int n; cin >> n;
        priority_queue<int> p;
        for (int i = 1; i <= n; i++)
        {
            int x; cin >> x;
            if (i%2 != 0) p.push(x);
        }
        cout << p.top() << endl;
    }

    return 0;
}