#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; string a, b;
        cin >> n >> a >> b;
        
        int ae1 = 0, ao1 = 0, be0 = 0, bo0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                if (a[i] == '1') ao1++;
                if (b[i] == '0') bo0++;
            }
            else
            {
                if (a[i] == '1') ae1++;
                if (b[i] == '0') be0++;
            }
        }
        
        if (ae1 <= bo0 && ao1 <= be0)
            cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}