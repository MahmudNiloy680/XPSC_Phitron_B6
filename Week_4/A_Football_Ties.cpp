// Problem Link: https://www.codechef.com/problems/FOOTBALLTIES
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
        int x, y; cin >> x >> y;
        cout << x % 3 << endl;
    }

    return 0;
}