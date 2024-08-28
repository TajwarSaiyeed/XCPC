/*
    Author: Tajwar Saiyeed
    Date: 2024-08-28 20:53:26
    File: Easy Subarray Sum.cpp
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
    int n;
    cin >> n;
    vi a(n);
    fr(i, 0, n) cin >> a[i];

    int l = 0, r = n - 1;

    while (l < n && a[l] <= 0)
        l++;

    while (r >= 0 && a[r] <= 0)
        r--;

    if (r > l)
    {
        int ans = 0;
        fr(i, l, r + 1) if (a[i] < 0) ans++;
        cout << ans << nl;
        return;
    }

    cout << 0 << nl;
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