#include <bits/stdc++.h>
using namespace std;

void up(int &x)
{
    x = (x == 9) ? 0 : x + 1;
}

void down(int &x)
{
    x = (x == 0) ? 9 : x - 1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        for (int i = 0; i < n; i++)
        {
            int k; string m;
            cin >> k >> m;

            for (int j = k - 1; j >= 0; j--)
            {
                if (m[j] == 'D')
                    up(a[i]);
                else 
                    down(a[i]);
            }
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}