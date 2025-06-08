#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        map<char, char> mp;
        set<char> fltr;
        for (char i : s) fltr.insert(i);

        auto f = fltr.begin();
        auto l = fltr.rbegin();

        while (f != fltr.end())
        {
            mp[*f] = *l;
            ++f; ++l;
        }
        
        for (auto i : s)
            cout << mp[i];
        cout << endl;
    }
    return 0;
}