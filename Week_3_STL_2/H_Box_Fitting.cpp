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
        int n, w;
        cin >> n >> w;
        multiset<int>  p1;

        while (n--)
        {
            double x; cin >> x;
            p1.insert(x);
        }
        int shlv = 0;
        while (!p1.empty())
        {
            int s = w;
            while (1)
            {
                auto it = p1.upper_bound(s);
                if (it == p1.begin()) break;
                else s -= *(--it);
                p1.erase(it);
            }
            shlv++;
        }
        cout << shlv << endl;
    }

    return 0;
}