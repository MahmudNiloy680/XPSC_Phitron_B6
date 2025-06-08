#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int ct = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
            ct++;
    }

    cout << ct << endl;
    return 0;
}