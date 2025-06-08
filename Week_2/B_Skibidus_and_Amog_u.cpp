#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        s.replace(s.end() - 2, s.end(), "i");
        cout << s << endl;
        
    }
    return 0;
}