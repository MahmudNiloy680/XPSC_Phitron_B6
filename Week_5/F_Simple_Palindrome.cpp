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
        int n; cin >> n;
        string a[5] = {"a", "e", "i", "o", "u"};
        string s = "";
        for (int i = 0; i < n; i++)
            s += a[i % 5];
        sort(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}