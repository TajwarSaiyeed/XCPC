/*
    Author: Tajwar Saiyeed
    Date: 2024-05-04 20:05:51
    File: F - Number Game.cpp
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
#define srt(vll) sort(a.begin(), a.end())
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;

    auto ok = [&](vll a, ll n, ll k) -> bool
    {
        multiset<ll> s;
        for (auto i : a)
            s.insert(i);

        fr(i, 1, k + 1)
        {
            if (s.empty())
                return false;

            ll req = k - i + 1;
            auto it = s.upper_bound(req);
            if (it == s.begin())
                return false;
            it--;

            s.erase(it);
            if (!s.empty())
            {
                it = s.begin();
                ll v = (*it);
                v += (req);
                s.erase(it);
                s.insert(v);
            }
        }
        return true;
    };

    while (tc--)
    {

        ll n;
        cin >> n;
        vll a(n);

        fr(i, 0, n) cin >> a[i];

        ll k, l = 0, r = n;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (ok(a, n, mid))
            {
                k = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << k << '\n';
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1749/C
// Submission : https://vjudge.net/solution/51102182