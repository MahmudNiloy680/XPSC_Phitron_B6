#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int odd = 0, freq[26] = {0};

        for (char c : s)
            freq[c - 'a']++;

        for (int i : freq)
        {
            if (i != 0  && i % 2 != 0)
                odd ++;
        }
        cout << ((k >= odd - 1) ? "YES\n" : "NO\n");
    }
    return 0;
}