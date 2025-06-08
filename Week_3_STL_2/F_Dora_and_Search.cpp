#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    
    while (t--)
    {
        int n; cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        int l = 1, r = n;
        int minval = 1, maxval = n;

        while (l <= r)
        {
            if (a[l] == minval ) 
            {
                l++;  minval++;
            }
            else if (a[l] == maxval)
            {
                l++; maxval--;
            }
            else if (a[r] == minval)
            {
                r--; minval++;
            }
            else if (a[r] == maxval)
            {
                r--; maxval--;
            }
            else break;
        }

        (l <= r) ? cout << l << " " << r : cout << -1;
        cout << endl;
    }
    return 0;
}