/*
    Author: Tajwar Saiyeed
    Date: 2024-08-12 23:41:18
    File: B. Long Long.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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

void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    ll absSum = 0;
    fr(i, 0, n)
    {
        cin >> a[i];
        absSum += abs(a[i]);
    }
    ll negativeSegments = 0;
    ll r = 0;

    bool neg = false;

    while (r < n)
    {
        if (a[r] < 0)
        {
            neg = true;
            while (neg && r < n)
            {
                if (a[r] > 0)
                {
                    negativeSegments++;
                    neg = false;
                }
                r++;
            }
        }
        else
        {
            r++;
        }
    }
    if (neg)
    {
        negativeSegments++;
    }

    cout << absSum << " " << negativeSegments << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1843/problem/B