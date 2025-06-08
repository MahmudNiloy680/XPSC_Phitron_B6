#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string,int> names;

    while (t--)
    {
        string s;
        cin >> s;
        if (names[s] == 0)
        {
            cout << "OK\n";
            names[s]++;
        }
        else
        {
            cout << s << names[s] << endl;
            string newname = s + to_string(names[s]);
            names[newname]++;
            names[s]++;
        }
    }
    return 0;
}