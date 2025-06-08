#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (st.empty()) cout << 0 << " ";
        else cout << st.top() + 1 << " ";
        st.push(i);
    }
    
    cout << nl;

    return 0;
}