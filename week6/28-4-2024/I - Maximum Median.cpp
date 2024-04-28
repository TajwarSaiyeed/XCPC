/*
    Author: Tajwar Saiyeed
    Date: 2024-04-28 22:29:13
    File: I - Maximum Median.cpp
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

    int n, k;
    cin >> n >> k;
    vi a(n);
    fr(i, 0, n) cin >> a[i];

    sort(a.begin(), a.end());

    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        fr(i, n / 2, n)
            cnt += (a[i] < mid ? (mid - a[i]) : 0);
        return cnt <= k;
    };

    ll l = 1, r = 2e9, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << '\n';

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1201/C
// Solution : https://vjudge.net/solution/50978157