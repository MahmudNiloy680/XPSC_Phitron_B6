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
        vector<pair<int, int>> v;
        int n; cin >> n;
        cout << 2 << endl;
        // cout << n << " " << n - 1 << endl;
        // for (int i = n; i > 2; i--)
        //     cout << i << " " << i - 2 << endl;
        int tmp = (n + n)/2;

        for (int i = n; i > 1; i--)
        {
            cout << tmp << " " << i - 1 << endl;
            tmp = (tmp + i)/2;
        }
    }

    return 0;
}