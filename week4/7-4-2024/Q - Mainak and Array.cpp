/*
    Author: Tajwar Saiyeed
    Date: 2024-04-07 23:07:31
    File: Q - Mainak and Array
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
#define greater greater<int>()
#define srt(vll) sort(a.begin(), a.end())
#define srtG(vll) sort(a.begin(), a.end(), greater)
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
        vll a(n);
        fr(i, 0, n) cin >> a[i];
        ll ans = a.back() - a.front();
        fr(i, 0, n - 1) ans = max(ans, a[i] - a.front());
        fr(i, 1, n) ans = max(ans, a.back() - a[i]);
        fr(i, 0, n - 1) ans = max(ans, a[i] - a[i + 1]);
        cout << ans << '\n';
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1726/A
// Submission : https://vjudge.net/solution/50541236