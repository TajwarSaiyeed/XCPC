/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 14:45:05
    File: B - Sum of Three Values.cpp
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

    ll n, x;
    cin >> n >> x;

    vector<pair<ll, ll>> a(n);

    fr(i, 0, n)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    fr(i, 0, n)
    {
        ll l = i + 1, r = n - 1;
        while (l < r)
        {
            if (a[i].first + a[l].first + a[r].first == x)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << nl;
                return 0;
            }
            else if (a[i].first + a[l].first + a[r].first < x)
                l++;
            else
                r--;
        }
    }

    cout << "IMPOSSIBLE" << nl;

    return 0;
}

// Problem : https://cses.fi/problemset/task/1641
// Submission : https://vjudge.net/solution/51495283