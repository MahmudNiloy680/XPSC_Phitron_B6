#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt(t)
    {
        int n; cin >> n;
        for (int i = n ;i > 0; i--)
            cout << i << " ";
        cout << nl;
    }

    return 0;
}