/*
    Author: Tajwar Saiyeed
    Date: 2024-05-16 22:26:26
    File: E - Fadi and LCM.cpp
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

    ll x;
    cin >> x;

    ll a = 1, b = x;

    ll i = 2;
    while (i * i <= x)
    {
        if (x % i == 0)
        {
            ll j = x / i;
            if (__gcd(i, j) == 1)
            {
                a = i;
                b = j;
            }
        }
        i++;
    }

    cout << a << " " << b << nl;

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1285/C
// Submission : https://vjudge.net/solution/51319538