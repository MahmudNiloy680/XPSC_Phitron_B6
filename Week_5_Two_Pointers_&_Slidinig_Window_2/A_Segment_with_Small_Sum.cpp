#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n, s; cin >> n >> s;
        priority_queue<int, vector<int>, greater<int>> pq;
        while (n--)
        {
            int x; cin >> x;
            pq.push(x);
        }

        int cnt = 0;
        int sum = 0;
        while (!pq.empty())
        {
            sum += pq.top(); pq.pop();
            if (sum >= s) break;
            cnt++;
        }
        cout << cnt << nl;

    return 0;
}