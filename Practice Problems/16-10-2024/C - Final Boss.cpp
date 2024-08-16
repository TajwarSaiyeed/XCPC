/*
    Author: Tajwar Saiyeed
    Date: 2024-08-16 23:01:32
    File: C - Final Boss.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srt(vll) sort(vll.begin(), vll.end())
#define srtG(vll) sort(vll.begin(), vll.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

void solve()
{
    int h, n;
    cin >> h >> n;
    vi a(n), c(n);
    fr(i, 0, n)
    {
        cin >> a[i];
    }
    fr(i, 0, n)
    {
        cin >> c[i];
    }
    ll ans = 0;
    fr(i, 0, n)
    {
        if (h <= 0)
        {
            break;
        }
        if (a[i] >= h)
        {
            ans++;
            break;
        }
        if (i + 1 < n && a[i + 1] >= h)
        {
            ans++;
            break;
        }
        if (a[i] > a[i + 1])
        {
            if (c[i] > 1)
            {
                ans++;
                h -= a[i];
            }
            else
            {
                h -= a[i];
            }
        }
        else
        {
            if (c[i] > 1)
            {
                ans++;
                h -= a[i];
            }
            else
            {
                h -= a[i];
            }
        }
    }
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem :