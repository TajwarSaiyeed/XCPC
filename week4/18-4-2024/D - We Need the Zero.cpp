/*
    Author: Tajwar Saiyeed
    Date: 2024-04-18 17:23:44
    File: D - We Need the Zero.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, x = 0, ans = 0;
        cin >> n;
        vector<ll> a(n);
        fr(i, 0, n)
        {
            cin >> a[i];
            x ^= a[i];
        }
        fr(i, 0, n) a[i] ^= x;
        fr(i, 0, n) ans ^= a[i];
        cout << (ans == 0 ? x : -1) << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1805/A
// Submission : https://vjudge.net/solution/50719767