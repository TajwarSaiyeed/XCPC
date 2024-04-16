/*
    Author: Tajwar Saiyeed
    Date: 2024-04-16 21:34:22
    File: T - Fedor and New Game.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;

    vi a(m + 1);
    fr(i, 0, m + 1) cin >> a[i];

    vector<vector<int>> all_mask;
    fr(i, 0, m + 1)
    {
        vi v;
        fr(k, 0, n)
        {
            if ((a[i] >> k) & 1)
                v.push_back(1);
            else
                v.push_back(0);
        }
        all_mask.push_back(v);
    }

    int ans = 0;
    vi fedor_mask = all_mask[m];
    fr(i, 0, all_mask.size() - 1)
    {
        vi v = all_mask[i];
        int cnt = 0;
        fr(k, 0, n)
        {
            if (fedor_mask[k] != v[k])
            {
                cnt++;
            }
        }

        if (cnt <= k)
            ans++;
    }

    cout << ans << '\n';
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/467/B
// Submission : https://vjudge.net/solution/50686792