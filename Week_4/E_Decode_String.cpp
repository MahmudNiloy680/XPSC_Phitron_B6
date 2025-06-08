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
        int n; string s;
        cin >> n >> s;

        string ans = "";
        for (int i = 0; i < n; i++)
        {
            int x;
            if ((i+3 <= n) && s[i+2] == '0' && s[i+3] != '0')
            {
                x = 10*(s[i] - '0') + (s[i + 1] - '0');
                i+= 2;             
            }
            else 
            {
                x = (s[i] - '0');
            }

            if (i >= n) break;
            x--;
            ans.push_back('a' + x);
        }

        cout << ans << endl;

    }

    return 0;
}