/*
    Author: Tajwar Saiyeed
    Date: 2024-03-21 12:59:39
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        string s, ns;
        cin >> n >> c >> s;
        ll cnt = 0;
        vector<ll> v;
        ns = s.append(s);
        for (char ch : ns)
        {
            if (ch == 'g')
            {
                if (cnt > 0)
                {
                    v.push_back(cnt);
                    cnt = 0;
                }
            }
            else if (cnt > 0)
            {
                cnt++;
            }
            else if (ch == c)
            {
                cnt++;
            }
        }
        if (cnt > 0)
        {
            v.push_back(cnt);
        }
        if (!v.empty())
        {
            ll ans = 0;
            for (int i = 0; i < v.size(); i++)
            {
                ans = max(ans, v[i]);
            }
            if (ans > n)
            {
                cout << n << "\n";
            }
            else
            {
                cout << ans << "\n";
            }
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1744/C
// Submission: https://vjudge.net/solution/50041167