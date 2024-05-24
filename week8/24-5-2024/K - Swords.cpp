/*
    Author: Tajwar Saiyeed
    Date: 2024-05-24 23:03:22
    File: K - Swords.cpp
*/
#include <bits/stdc++.h>
using namespace std;
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

const int N = 2e5 + 5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll mx = -1e18;
    vll v(N);
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
        sum += v[i];
        mx = max(v[i], mx);
    }
    ll ans = 0;
    fr(i, 1, n + 1) ans = __gcd(ans, mx - v[i]);
    cout << (mx * n - sum) / ans << " " << ans << '\n';

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1216/D
// Submission: https://vjudge.net/solution/51470174