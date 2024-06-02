/*
    Author: Tajwar Saiyeed
    Date: 2024-06-02 22:15:26
    File: A - Greg and Array.cpp
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n);
    fr(i, 0, n)
    {
        cin >> a[i];
    }

    vector<ll> d(m + 2, 0);

    fr(i, 1, m + 1)
    {
        ll l, r, x;
        cin >> l >> r >> x;
        d[l] += x;
        d[r + 1] -= x;
    }

    fr(i, 1, m + 1)
    {
        d[i] += d[i - 1];
    }

    vector<ll> ans(n + 2, 0);

    fr(i, 1, k + 1)
    {
        ll x, y;
        cin >> x >> y;
        ans[x] += d[x];
        ans[y + 1] -= d[y];
    }

    fr(i, 1, n + 1)
    {
        ans[i] += ans[i - 1];
    }

    fr(i, 1, n + 1)
    {
        cout << a[i - 1] + ans[i] << " ";
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/295/A