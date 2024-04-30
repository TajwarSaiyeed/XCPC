/*
    Author: Tajwar Saiyeed
    Date: 2024-04-23 22:48:11
    File: D - Two Elevators.cpp
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
        ll a, b, c;
        cin >> a >> b >> c;

        ll x1 = abs(a - 1);
        ll x2 = abs(b - c) + abs(c - 1);

        if (x1 == x2)
            cout << 3 << nl;
        else if (x1 > x2)
            cout << 2 << nl;
        else
            cout << 1 << nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1729/A
// Submission : https://vjudge.net/solution/51018361