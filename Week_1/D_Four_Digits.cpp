#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.size() < 4)
    {
        for (int i = 0; i < 4 - s.size(); i++)
            cout << "0";
        cout << s;
    }
    else
        cout << s;
    cout << endl;
    return 0;
}