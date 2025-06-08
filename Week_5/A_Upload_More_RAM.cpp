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
        int n, k;
        cin >> n >> k;
        cout << k*(n-1) + 1 << endl;
    }

    return 0;
}