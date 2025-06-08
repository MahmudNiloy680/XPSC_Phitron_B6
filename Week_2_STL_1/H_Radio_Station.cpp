#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, string> ip_name;
    while (n--)
    {
        string name, ip;
        cin >> name >> ip;
        ip_name[ip] = name;
    }
    while (m--)
    {
        string cmd, ip;
        cin >> cmd >> ip;
        ip.pop_back();
        cout << cmd << " " << ip << "; #" << ip_name[ip] << endl;
    }
    return 0;
}