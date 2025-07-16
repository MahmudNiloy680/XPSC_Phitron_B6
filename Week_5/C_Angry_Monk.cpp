// Problem Link: https://codeforces.com/problemset/problem/1992/B
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
        int n, k;
        cin >> n >> k;
        priority_queue<int> pq;
        vector<int> one;

        while (k--)
        {
            int x; cin >> x;
            if (x == 1) one.push_back(x);
            else pq.push(x);
        }
        ll ans = one.size();
        if (!pq.empty())
        {
            pq.pop();
            while (!pq.empty())
            {
                ans += 2*pq.top() - 1;
                pq.pop();
            }
        }
        else ans--;

        cout << ans << endl;
    }

    return 0;
}