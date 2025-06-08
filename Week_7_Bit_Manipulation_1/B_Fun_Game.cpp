#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt(q)
    {
        int n; cin >> n;
        string s, t;
        cin >> s >> t;

        if (s == t || s[0] == '1') cout << "YES";
        else
        {
            int i = 0; bool flg = true;
            while (s[i] != '1' && i < n)
            {
                if (s[i] != t[i])
                {
                    flg = false; break;
                }
                i++;
            }
            cout << (flg ? "YES" : "NO");
        }
        cout << nl;
    }

    return 0;
}