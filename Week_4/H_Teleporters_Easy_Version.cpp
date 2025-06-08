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
        int n, c;
        cin >> n >> c;
        vector<int> a(n), cost(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cost[i] = i + 1 + a[i];
        }
        sort(cost.begin(), cost.end());

        int cnt = 0;
        for (ll i : cost)
        {
            if (i > c) break;
            c -= i;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}