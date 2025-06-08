#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b > a)
        swap(a, b);
    if (a-1 > b)
        cout << 2*a - 1;
    else
        cout << a + b;
    return 0;
}