#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt(T)
    {
        int n, m;
        cin >> n >> m;

        if (n < m) cout << "No";
        else if (abs(n-m) % 2 == 0)
            cout << "Yes";
        else cout << "No";            
        
        cout << nl;
    }

    return 0;
}