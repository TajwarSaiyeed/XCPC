/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 14:53:51
    File: C - Concert Tickets.cpp
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

    ll n, m;
    cin >> n >> m;

    vll a(n), b(m);

    fr(i, 0, n) cin >> a[i];
    fr(i, 0, m) cin >> b[i];

    multiset<ll> s;
    fr(i, 0, n) s.insert(a[i]);

    fr(i, 0, m)
    {
        auto it = s.upper_bound(b[i]);
        if (it == s.begin())
            cout << -1 << nl;
        else
        {
            --it;
            cout << *it << nl;
            s.erase(it);
        }
    }

    return 0;
}

// Problem : https://cses.fi/problemset/task/1091
// Submission: https://vjudge.net/solution/51495444