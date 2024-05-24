/*
    Author: Tajwar Saiyeed
    Date: 2024-05-24 22:44:01
    File: Q - Paint the Array.cpp
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n;
        cin >> n;
        vll v(n + 1);
        fr(i, 1, n + 1) cin >> v[i];
        ll ans = v[1];
        fr(i, 2, n + 1) ans = __gcd(ans, v[i]);
        cout << ans << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1618/C