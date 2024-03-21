/*
    Author: Tajwar Saiyeed
    Date: 2024-03-21 11:55:48
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            ans = max(ans, x - i);
        }
        cout << ans << "\n";
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1604/A
// Submission : https://vjudge.net/solution/50031377