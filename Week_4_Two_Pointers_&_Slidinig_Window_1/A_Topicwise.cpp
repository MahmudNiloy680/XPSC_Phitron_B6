#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x; cin >> x;

    int it = 0;
    string s;
    while (x[it] != '.')
    {
        s += x[it];
        it++;
    }

    int dig = x[it-1] - '0';
    int dec = x[it+1] - '0';

    if (dig == 9) 
    {
        cout << "GOTO Vasilisa."; return 0;
    }
    else if (dec < 5) s.back() = dig + '0';
    else s.back() = dig + 1 + '0';

    cout << s << nl;
    

    return 0;
}