// #include <bits/stdc++.h>
// using namespace std;

// void up(int &x)
// {
//     x = (x == 9) ? 0 : x + 1;
// }

// void down(int &x)
// {
//     x = (x == 0) ? 9 : x - 1;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int a[n];
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
        
//         for (int i = 0; i < n; i++)
//         {
//             int k; string m;
//             cin >> k >> m;

//             for (int j = k - 1; j >= 0; j--)
//             {
//                 if (m[j] == 'D')
//                     up(a[i]);
//                 else 
//                     down(a[i]);
//             }
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) ll x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt(t)
    {
        int n; cin >> n;
        vector<int> final(n);
        for (int &x : final) cin >> x;

        for (int i = 0; i < n; i++)
        {
            int mod = 0;
            int x; string s;
            cin >> x >> s;
            for (auto i : s)
            {
                if (i == 'D') mod--;
                else mod++;
                mod %= 10;
            }

            ((final[i] -= mod) %= 10) < 0 ? final[i]+= 10 : 0;
            cout << final[i] << " ";
        }
        cout << nl;
    }

    return 0;
}