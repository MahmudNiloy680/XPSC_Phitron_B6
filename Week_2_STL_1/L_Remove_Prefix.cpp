#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        map<int, int> mp;
        vector<int> v(n);
        for (auto &x : v) cin >> x;
        
        for (int i = n - 1; i >= 0; i--)
        {
            int x = v[i];
            if (mp[x] != 0) break;
            else mp[x]++;
        }
        cout << n - mp.size() << endl;
    }
    return 0;
}