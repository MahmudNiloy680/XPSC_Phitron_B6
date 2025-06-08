#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;
        int has = 0;
        int gives = 0;
        for (auto i : v)
        {
            if (i >= k) has += i;
            else if (i == 0)
            {
                if (has > 0)
                {
                    has--; gives++;
                }
            }
        }
        cout << gives << endl;
    }

    return 0;
}