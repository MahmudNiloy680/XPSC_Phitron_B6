#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<long long int> s;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        auto it = s.lower_bound(i);
        if (it != s.end())
        {
            s.erase(it);
            cnt++;
        }
        else break;
    }

    cout << cnt << endl;
    return 0;
}