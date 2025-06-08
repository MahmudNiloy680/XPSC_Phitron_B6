#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int c = 1;

    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;

    while (t--)
    {
        int q; cin >> q;
        if (q == 1)
        {
            int m; cin >> m;
            s.insert({c, m});
            ml.insert({m, -c});
            c++;
        }

        else if (q == 2)
        {
            int p = s.begin()->first, m = s.begin()->second;
            ans.push_back(p);
            s.erase(s.begin());
            ml.erase({m, -p});
        }
        else if (q == 3)
        {
            int p = -ml.rbegin()->second, m = ml.rbegin()->first;
            ans.push_back(p);
            ml.erase(--ml.end());
            s.erase({p, m});
        }
    }

    for (auto i : ans)
        cout << i << " ";

    return 0;
}