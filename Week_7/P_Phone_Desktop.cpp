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
        float x, y;
        cin >> x >> y;
        
        int ans = 0;
        ans += ceil(y/2);
        int sq_left = 15*ans - 4*y;
        
        if (x > sq_left)
        {
            x -= sq_left;
            ans += ceil(x/15);
        }

        cout << ans << nl;
    }

    return 0;
}