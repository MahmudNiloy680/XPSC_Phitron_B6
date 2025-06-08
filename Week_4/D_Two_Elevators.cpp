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
        int a, b, c;
        cin >> a >> b >> c;

        if (c < b)
        {
            if (a < b) cout << 1;
            else if (b < a) cout << 2;
            else cout << 3;
        }
        else if (c > b)
        {
            if (2*c - b > a) cout << 1;
            else if (2*c - b < a) cout << 2;
            else cout << 3;
        }
        cout << endl;
    }

    return 0;
}