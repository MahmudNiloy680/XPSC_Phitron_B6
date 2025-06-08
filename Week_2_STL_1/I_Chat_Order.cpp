#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<int, string> ans;
    map<string, int> names;

    for (int i = t; i > 0; i--)
    {
        string name;
        cin >> name;
        names[name] = i;
    }

    for (auto i : names)  
        ans[i.second] = i.first;

    for (auto i : ans)
        cout << i.second << endl;

    return 0;
}