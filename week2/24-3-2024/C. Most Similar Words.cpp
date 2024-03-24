/*
    Author: Tajwar Saiyeed
    Date: 2024-03-24 15:45:03
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
        int x, y;
        cin >> x >> y;
        vector<string> v;
        while (x--)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        int ans = INT_MAX;

        while (y--)
        {
            for (int i = 0; i < v.size(); i++)
            {
                for (int j = i + 1; j < v.size(); j++)
                {
                    ll diff = 0;
                    for (ll k = 0; k < v[i].size(); k++)
                    {
                        if (v[i][k] != v[j][k])
                            diff += abs(v[i][k] - v[j][k]);
                    }
                    ans = min(ans, (int)diff);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1676/problem/C
// Submission : https://vjudge.net/solution/50151482