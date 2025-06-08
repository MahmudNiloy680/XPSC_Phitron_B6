#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;

    set<int> s;
    map<int, int> mp;
    while (n--)
    {
        int t; cin >> t;
        
        s.insert(t);

        int seg1 = 0, seg2 = 0;

        if (s.upper_bound(t) != s.end()) seg1 = *s.upper_bound(t) - t;
        else seg1 = x - t;
        
        if (t != *s.begin()) seg2 = t - *(--s.lower_bound(t));
        else seg2 = t;

        mp[seg1]++; mp[seg2]++;

        if (mp.find(seg1+ seg2) != mp.end())
        {
            mp[seg1+ seg2]--;
            if (mp[seg1+ seg2] == 0)
                mp.erase(seg1+ seg2);
        }

        cout << mp.rbegin()->first << " ";
        
    }

    return 0;
}


