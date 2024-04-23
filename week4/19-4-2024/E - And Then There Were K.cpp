/*
    Author: Tajwar Saiyeed
    Date: 2024-04-19 23:24:24
    File: E - And Then There Were K.cpp
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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, mx = 1;
        cin >> n;
        while (mx <= n)
            mx *= 2;
        cout << mx / 2 - 1 << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1527/A
// Solution : https://vjudge.net/solution/50850530