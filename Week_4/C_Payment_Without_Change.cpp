// Problem Link: https://codeforces.com/problemset/problem/1256/A
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
        int a, b, n, s;
        cin >> a >> b >> n >> s;

        if (s/n <= a)
        {
            if (s - (s/n)*n <= b) 
                cout << "YES\n";
            else cout << "NO\n";
        }
        else
        {
            if (s - n*a <= b) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}