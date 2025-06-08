#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, set<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        } 

        
        while (k--)
        {
            int l, r;
            cin >> l >> r;
            if (mp.find(l) == mp.end() || mp.find(r) == mp.end())
                cout << "NO\n";
            else
            {
                int si, ei;
                si = *mp[l].begin();
                ei = *mp[r].rbegin();

                cout << (si < ei ? "YES\n" : "NO\n");
            }
        }
    }
    return 0;
}