#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    multiset<int> ml;
    while (n--)
    {
        int x; cin >> x;

        auto it = ml.upper_bound(x);
        if (it != ml.end())
            ml.erase(it);
        ml.insert(x);
    }
    
    cout << ml.size() << nl;

    return 0;
}


