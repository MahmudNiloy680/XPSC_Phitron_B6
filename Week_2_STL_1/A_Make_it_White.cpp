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
        int n; string s;
        cin >> n >> s;

        // int st = 0, ed = s.size() - 1;
        // while (s[st] != 'B')
        //     st++;
        // while (s[ed] != 'B')
        //     ed--;
        // cout << ed - st + 1 << endl;

        int firstpos = s.find('B'), lastpos = s.rfind('B');
        cout << lastpos - firstpos + 1 << endl;
    }

    return 0;
}