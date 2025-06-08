#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    tt(T)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;
        int g = 0, s = 0;
        int tweak = 0;

        if (a[1] == a[0]) tweak++;
        else if (a[1] > a[0]) g = 1;
        else s = 1;

        for (int i = 2; i < n; i++)
        {
            if (g == 1 && a[i] < a[i - 1])
            {
                g = 0;
                s = 1;
                tweak++;
            }
            else if (s == 1 && a[i] > a[i - 1])
            {
                s = 0;
                g = 1;
                tweak++;
            }
        }
        cout << ((tweak == 0 || tweak == 2) ? "Yes" : "No") << nl;
    }

    return 0;
}