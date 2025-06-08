#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;  cin >> n;
        string s;   cin >> s;
        ll ans = 0;
        vector<ll> a;
        for (int i = 0; i < n; i++)
        {
            int lcnt = i;
            int rcnt = n - 1 - i;

            if (s[i] == 'L') 
            {
                ans += lcnt;
                a.push_back(max(lcnt, rcnt) - lcnt);
            }
            else
            {
                ans += rcnt;
                a.push_back(max(lcnt, rcnt) - rcnt);
            }
        }

        sort(a.begin(), a.end(), greater<ll>());
        for (int i : a)
        {
            ans += i;
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}