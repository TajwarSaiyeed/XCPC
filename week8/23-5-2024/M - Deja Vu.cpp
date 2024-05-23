/*
    Author: Tajwar Saiyeed
    Date: 2024-05-23 20:59:47
    File: M - Deja Vu.cpp
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
        ll n, q, x;
        cin >> n >> q;
        vector<ll> a(n), b;
        fr(i, 0, n) cin >> a[i];
        fr(i, 0, q)
        {
            cin >> x;
            if (b.empty() or b.back() > x)
                b.push_back(x);
        }

        fr(i, 0, n) for (auto it : b)
        {
            if (a[i] % (1 << it) == 0)
            {
                it = it - 1;
                a[i] += (1 << it);
            }
        }

        fr(i, 0, n) cout << a[i] << " ";

        cout << '\n';
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1891/B
// Submission: https://vjudge.net/solution/51450045