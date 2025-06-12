#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) ll x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt(t)
    {
        int n; cin >> n;
        deque<int> a(n);
        int zero = 0;
        for(int &x : a)
        {
            cin >> x;
            if (x == 0) zero++;
        }

        int r_cnt = 0;
        while (!a.empty() && a.back() == 0) a.pop_back(), r_cnt++;;
        while (!a.empty() && a.front() == 0) a.pop_front(), r_cnt++;

        if (zero == n) cout << 0;
        else if (zero == r_cnt) cout << 1;
        else cout << 2;

        cout << nl;
    }

    return 0;
}