#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<int> odd;
    priority_queue<int> even;
    int ct_odd = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x % 2 != 0)
        {
            ct_odd++;
            odd.push(x);
        }
        else
            even.push(x);
    }
    
    long long sum = 0;
    while (!even.empty())
    {
        sum += even.top();
        even.pop();
    }
    while (!odd.empty())
    {
        if (ct_odd % 2 != 0 && odd.size() == 1)
            break;
        sum += odd.top();
        odd.pop();
    }

    cout << sum << endl;
    return 0;
}