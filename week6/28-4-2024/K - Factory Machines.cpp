/*
    Author: Tajwar Saiyeed
    Date: 2024-04-28 21:58:45
    File: K - Factory Machines.cpp
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

    int n, t;
    cin >> n >> t;
    vi a(n);
    fr(i, 0, n) cin >> a[i];

    auto ok = [&](ll m)
    {
        ll total = 0;
        fr(i, 0, n)
        {
            total += (m / a[i]);
            if (total >= t)
            {
                return true;
            }
        }
        return false;
    };

    ll l = 1, r = 1e18, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << '\n';
    return 0;
}

// Problem : https://cses.fi/problemset/task/1620
// Solution : https://vjudge.net/solution/50978104