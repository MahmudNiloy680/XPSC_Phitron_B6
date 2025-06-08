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
        int n, m, q;
        cin >> n >> m >> q;
        multiset<int> tcr;
        while(m--)
        {
            int pos; cin >> pos;
            tcr.insert(pos);
        }

        while (q--)
        {
            int d; cin >> d;
            if (d < *tcr.begin()) cout << *tcr.begin() - 1 << endl;
            else if (d > *tcr.rbegin()) cout << n - *tcr.rbegin() << endl;
            else
            {
                int l = *(--tcr.upper_bound(d));
                int r = *(tcr.upper_bound(d));
                int dpos = (l + r)/2;
                cout << min(dpos - l, r - dpos) << endl;
            }
        }
    }

    return 0;
}