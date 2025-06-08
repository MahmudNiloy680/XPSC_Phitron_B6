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
        string s;
        cin >> s;
        int n = s.size();

        int r = 0;
        int z = 0;

        for(char i : s)
        {
            if (i == '0') 
                z++;
            else 
                r = max(r, z + 1);
        }
        cout << n - r << endl;
    }

    return 0;
}