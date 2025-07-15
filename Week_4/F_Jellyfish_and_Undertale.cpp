// Problem Link: https://codeforces.com/problemset/problem/1875/A
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
        ll a, b, n;
        cin >> a >> b >> n;

        ll cnt1 = 0, cnt2 = 0;
        while (n--)
        {
            int x; cin >> x;
            if (x < a) cnt1 += x;
            else cnt2 ++; 
        }

        cout << (a-1)*cnt2 + cnt1 + b << endl;
    }

    return 0;
}