/*
    Author: Tajwar Saiyeed
    Date: 2024-06-23 13:05:29
    File: D - Maximal AND.cpp
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k;
        cin >> n >> k;
        vll a(n);
        fr(i, 0, n) cin >> a[i];

        vector<bitset<31>> bits;

        fr(i, 0, n)
        {
            bitset<31> b(a[i]);
            bits.push_back(b);
        }

        ll ans = 0;
        nfr(i, 30, -1)
        {
            ll cnt = 0;
            fr(j, 0, n) cnt += (bits[j][i] == 0);
            if (cnt <= k)
            {
                k -= cnt;
                ans += (1 << i);
            }
        }

        cout << ans << nl;
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1669/problem/H
// Solution :  https://vjudge.net/solution/52054742