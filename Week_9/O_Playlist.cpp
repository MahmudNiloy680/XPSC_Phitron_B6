#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, ans = 0;
    mp[a[0]] = 0;
    for (int r = 1; r < n; r++)
    {
        if(mp[a[r]] < r && mp[a[r]] >= l)
        {
            ans = max(ans, (r - l));
            l++;
        }
        mp[a[r]] = r;
    }

    cout << ans << nl;


    return 0;
}