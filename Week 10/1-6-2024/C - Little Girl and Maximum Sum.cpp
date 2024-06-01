/*
    Author: Tajwar Saiyeed
    Date: 2024-06-01 21:17:41
    File: C - Little Girl and Maximum Sum.cpp
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

    ll n, q;
    cin >> n >> q;
    vi a(n), d(n + 1);
    fr(i, 0, n) cin >> a[i];
    fr(i, 1, q + 1)
    {
        ll l, r;
        cin >> l >> r;
        l--, r--;
        d[l]++;
        d[r + 1]--;
    }
    fr(i, 1, n + 1) d[i] += d[i - 1];
    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());
    ll sum = 0;
    fr(i, 0, n) sum += (1LL * d[i] * a[i]);
    cout << sum << '\n';
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/276/C
// Submission : https://vjudge.net/solution/51619941