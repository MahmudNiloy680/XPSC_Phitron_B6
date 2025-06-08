#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R' || b[i] == 'R')
            {
                if (a[i] != b[i])
                {
                    flag = false;
                    break;
                }
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}