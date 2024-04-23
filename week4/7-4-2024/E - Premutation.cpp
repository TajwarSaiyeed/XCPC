/*
    Author: Tajwar Saiyeed
    Date: 2024-04-07 22:58:29
    File: E - Premutation.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define vvll vector<vector<ll>>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mpllpair map<ll, pair<ll, ll>>
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
        vvll a(n + 1);
        fr(i, 0, n)
        {
            fr(j, 0, n - 1)
            {
                ll x;
                cin >> x;
                a[i].push_back(x);
            }
        }
        mpllpair mp;

        ll value = 0;

        fr(i, 0, n)
        {
            if (mp[a[i][n - 2]].second == 0)
            {
                mp[a[i][n - 2]].first = i;
                mp[a[i][n - 2]].second++;
            }
            else
            {
                mp[a[i][n - 2]].second = -1;
                value = a[i][n - 2];
            }
        }

        for (auto &x : mp)
        {
            if (x.second.second != -1)
            {
                fr(i, 0, n - 1)
                {
                    cout << a[x.second.first][i] << " ";
                }
            }
        }

        cout << value << "\n";
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1790/C
// Submission : https://vjudge.net/solution/50834926