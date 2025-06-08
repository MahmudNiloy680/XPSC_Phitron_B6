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
        int n;
        cin >> n;

        vector<vector<int>> v(n, vector<int> (n-1));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n - 1; j++)
                cin >> v[i][j];
        
        int exc, idx;
        if (v[0].back() == v[1].back())
            exc = v[0].back();
        else 
            exc = v[2].back();

        for (int i = 0; i < n; i++)
        {
            if (v[i].back() != exc)
                idx = i;
        }

        v[idx].push_back(exc);

        for (int i = 0 ; i < n; i++)
            cout << v[idx][i] << " ";
        cout << endl;
    }

    return 0;
}