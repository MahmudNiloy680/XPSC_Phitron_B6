#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> a;

    for (ll i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            a.push_back(i); 
            if (i != n/i) 
                a.push_back(n/i);
        }
    }

    if (a.size() < k)
        cout << -1;
    else 
    {
        sort(a.begin(), a.end());
        cout << a[k-1];
    }
    
    cout << nl;
    return 0;
}