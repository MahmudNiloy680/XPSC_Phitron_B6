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
        int n;
        cin >> n;
        vector<int> v;

        bool flag = 0;
        int cnt_0 = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0) flag = true;
            if (flag)
            {
                if (x == 0) cnt_0++;
                v.push_back(x);
                sum += x;
            }
        }
        if (v.back() == 0) cnt_0--;
        
        if (sum == v.back()) cout << 0;
        else cout << sum + cnt_0 - v.back();
        cout << nl;
    }

    return 0;
}