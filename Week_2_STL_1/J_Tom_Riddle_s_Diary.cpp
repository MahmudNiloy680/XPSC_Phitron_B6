#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, bool> lst;
    while (n--)
    {
        string name;
        cin >> name;
        if (!lst[name])
        {
            cout << "NO\n";
            lst[name] = 1;
        }
        else cout << "YES\n";
    }

    return 0;
}