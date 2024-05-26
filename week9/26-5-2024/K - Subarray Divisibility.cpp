/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 15:28:21
    File: K - Subarray Divisibility.cpp
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

    ll sum = 0, ans = 0;
    map<ll, ll> mp;

    mp[0] = 1;
    fr(i, 0, n)
    {
        ll x;
        cin >> x;
        sum = (sum + x % n + n) % n;
        ans += mp[sum];
        mp[sum]++;
    }

    cout << ans;
    return 0;
}

// Problem : https://cses.fi/problemset/task/1662/
// Submission : https://vjudge.net/solution/51496063