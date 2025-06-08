#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll n = 1;
        while (x > 3)
        {
            x /= 4;
            n*=2;
        }
        cout << n << endl;
    }

    return 0;
}