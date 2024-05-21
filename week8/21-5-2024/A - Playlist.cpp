/*
    Author: Tajwar Saiyeed
    Date: 2024-05-21 22:50:32
    File: A - Playlist.cpp
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

    ll n;
    cin >> n;
    vll a(n);
    fr(i, 0, n) cin >> a[i];
    map<ll, ll> cnt;
    ll ans = -1e18, r = 0;
    fr(l, 0, n)
    {
        while (cnt[a[r]] == 0 && r < n)
        {
            cnt[a[r]]++;
            ans = max(ans, r - l + 1);
            r++;
        }
        cnt[a[l]]--;
    }
    cout << ans << '\n';
    return 0;
}

// Problem : https://cses.fi/problemset/task/1141/