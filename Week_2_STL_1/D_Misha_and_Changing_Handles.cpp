#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    map<string, string> mp;

    while (n--)
    {
        string a, b;
        cin >> a >> b;
        if (mp[a].empty())
        {
            mp[b] = a;
        }
        else
        {
            string s = mp[a];
            mp.erase(a);
            mp[b] = s;
        }
    }

    cout << mp.size()/2 << endl;
    for (auto i : mp)
    {
        if (!i.second.empty())
        cout << i.second << " " << i.first << endl;
    }

    return 0;
}