#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int freq[26] = {0};

    cin >> s;

    for (char c : s)
        freq[c - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            cout << (char)('a' + i) << endl;
            return 0;
        }
    }
    cout << "None\n";

    return 0;
}