/*
    Author: Tajwar Saiyeed
    Date: 2024-04-07 23:08:27
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
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
        vll a(n);
        map<ll, ll> mp;
        fr(i, 0, n)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        set<ll> s;
        fr(i, 0, n)
        {
            s.insert(a[i]);
            s.insert(a[i] + 1);
        }

        ll x = 0, ans = 0;
        for (auto i : s)
        {
            ll y = mp[i];
            ans += max(0LL, y - x);
            x = y;
        }

        cout << ans << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1790/D
// Submission : https://vjudge.net/solution/51255173