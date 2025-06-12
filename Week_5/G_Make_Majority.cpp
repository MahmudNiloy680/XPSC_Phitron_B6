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
        int n;  cin >> n;
        vector<char> a;
        int cnt_1 = 0;
        for (int i = 0; i < n; i++)
        {
            char c; cin >> c;
            if (c == '1') cnt_1++;
            if (!a.empty() && c == '0' && a.back() == '0') continue;
            a.push_back(c);
        }
        
        if (cnt_1 > (a.size() - cnt_1)) cout << "Yes";
        else cout << "No";

        cout << nl;
    }

    return 0;
}