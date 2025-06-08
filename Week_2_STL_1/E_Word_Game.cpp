#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, vector<int>> mp;

        vector<int> ans(4);

        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        for (auto [s, v] : mp)
        {
            if (v.size() == 2)
            {
                ans[v[0]] += 1;
                ans[v[1]] += 1;
            }
            else if (v.size() == 1) 
            {
                ans[v[0]] += 3;
            }
        }

        for (int i = 1; i <= 3; i++)
            cout << ans[i] << " ";

        cout << endl;
    }
    return 0;
}