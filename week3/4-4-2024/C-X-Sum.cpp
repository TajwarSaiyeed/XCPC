/*
    Author: Tajwar Saiyeed
    Date: 2024-04-04 08:50:07
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n'
#define vll vector<ll>
#define vllvll vector<vll>
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m;
        cin >> n >> m;
        ll max_sum = 0;
        vllvll a(n, vll(m, 0));
        fr(i, n) fr(j, m) cin >> a[i][j];
        fr(i, n)
        {
            fr(j, m)
            {
                ll temp_sum = 0;
                temp_sum += a[i][j];

                for (ll x = i - 1, y = j - 1; x >= 0 and y >= 0; --x, --y)
                    temp_sum += a[x][y];

                for (ll x = i - 1, y = j + 1; x >= 0 and y < m; --x, ++y)
                    temp_sum += a[x][y];

                for (ll x = i + 1, y = j - 1; x < n and y >= 0; ++x, --y)
                    temp_sum += a[x][y];

                for (ll x = i + 1, y = j + 1; x < n and y < m; ++x, ++y)
                    temp_sum += a[x][y];

                max_sum = max(max_sum, temp_sum);
            }
        }

        cout << max_sum << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1676/problem/D
// Submission : https://vjudge.net/solution/50446192