#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int c1 = 0, c = 0;
        for (int &x : a)
        {
            cin >> x;
            (x==1) ? c1++ : c++;
        }
        cout << c + (c1 + 1)/2 << endl;
    }
    return 0;
}