#include <bits/stdc++.h>
using namespace std;

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) 
  {
    int n; cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;
    
    int m; cin >> m;

    while (m--) 
    {
      string s;
      cin >> s;
      if (s.size() != n) 
      {
        cout << "NO\n";
        continue;
      }

      map<int, char> mp;
      map<char, int> pre;
      bool flg = false;

      for (int i = 0; i < n; i++) 
      {
        if ((mp.find(a[i]) != mp.end() && mp[a[i]] != s[i]) || (pre.find(s[i]) != pre.end() && pre[s[i]] != a[i])) 
        {
          flg = true;
        } 
        else 
        {
          mp[a[i]] = s[i];
          pre[s[i]] = a[i];
        }
      }

      cout << (flg ? "NO\n" : "YES\n");
    }
  }
  return 0;
}