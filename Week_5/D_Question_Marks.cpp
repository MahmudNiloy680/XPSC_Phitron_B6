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
        int n;
        cin >> n;
        int cnt[4] = {0};
        for (int i = 0; i < 4*n; i++)
        {
            char x; cin >> x; 
            if (x == 'A') cnt[0]++;
            if (x == 'B') cnt[1]++;
            if (x == 'C') cnt[2]++;
            if (x == 'D') cnt[3]++;
        }

        int cor = 0;
        for (auto i : cnt)
            cor += min (n, i);
        
        cout << cor << endl;
    }

    return 0;
}