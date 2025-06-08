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
        int n; string s;
        cin >> n >> s;
        cout << (s[0] != s[n-1] ? "Yes\n" : "No\n");
    }

    return 0;
}