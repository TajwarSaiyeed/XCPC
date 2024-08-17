/*
    Author: Tajwar Saiyeed
    Date: 2024-08-17 16:12:58
    File: B. Sum of Medians.cpp
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
    ll n, k;
    cin >> n >> k;
    vll a(n * k);
    fr(i, 0, n * k) cin >> a[i];

    ll mid = n / 2;
    // cout << mid << nl;
    ll sum = 0;
    ll x = n * k;
    for (ll i = x - 1 - mid, j = 0; i >= 0 && j < k; j++, i -= mid + 1)
    {
        sum += a[i];
    }

    cout << sum << nl;
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

// Problem : https://codeforces.com/problemset/problem/1440/B
// Solution : https://vjudge.net/solution/53587629