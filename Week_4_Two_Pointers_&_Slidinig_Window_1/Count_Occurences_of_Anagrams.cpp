#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) int x; cin >> x; while (x--)

int countAnagram(string pat, string txt)
{
    int s1 = pat.size(), s2 = txt.size();
    int span = s1 - s2;
    int cnt = 0;

    for (int i = 0; i < span; i++)
    {
        map<char, int> mp;
        for (int j = i; j < s2; j++)
        {
            mp[pat[j]]++;
            mp[txt[j-i]]--;
        }

        cnt++;
        for (auto [x, y] : mp)
        {
            if (y != 0)
            {
                cnt--; 
                break;
            }
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string pat, txt;
    cin >> pat >> txt;
    cout <<  countAnagram(pat, txt) << nl;
    return 0;
}