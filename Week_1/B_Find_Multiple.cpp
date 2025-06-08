#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int t = a/c;
    int r = c*(t+1);

    if (a % c == 0)
        cout << a;
    else if (r <= b)
        cout << r;
    else 
        cout << -1;
    return 0;
}