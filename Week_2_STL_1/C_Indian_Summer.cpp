#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cin.ignore();

    map<string, int> mp;

    while (n--)
    {
        string s;
        getline(cin, s);
        mp[s]++;
    }

    cout << mp.size() << endl;

    return 0;
}