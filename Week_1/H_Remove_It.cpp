#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a;

    while (n--)
    {
        int r;
        cin >> r;
        if (r == x)
            continue;
        a.push_back(r);
    }

    for (int i : a)
        cout << i << " ";
    return 0;
}