/*
    Author: Tajwar Saiyeed
    Date: 2024-04-07 22:57:36
    File: K - Three Activities.cpp
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
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
typedef long long ll;

class cmp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.first > b.first;
    }
};

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
        vector<pair<ll, ll>> a, b, c;
        ll x;
        fr(i, 0, n)
        {
            cin >> x;
            a.push_back({x, i});
        }
        fr(i, 0, n)
        {
            cin >> x;
            b.push_back({x, i});
        }

        fr(i, 0, n)
        {
            cin >> x;
            c.push_back({x, i});
        }

        sort(a.begin(), a.end(), cmp());
        sort(b.begin(), b.end(), cmp());
        sort(c.begin(), c.end(), cmp());

        ll mx = 0;
        fr(i, 0, 3) fr(j, 0, 3) fr(k, 0, 3) if (a[i].second != b[j].second && b[j].second != c[k].second && c[k].second != a[i].second)
            mx = max(mx, a[i].first + b[j].first + c[k].first);
        cout << mx << endl;
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1914/D
// Submission : https://vjudge.net/solution/50561209