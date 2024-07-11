/*
    Author: Tajwar Saiyeed
    Date: 2024-07-11 18:45:17
    File: I - Yarik and Musical Notes.cpp
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
        int n;
        cin >> n;
        map<int, int> mp;
        vi a(n);
        fr(i, 0, n)
        {
            int x;
            cin >> x;
            mp[x]++;
            a[i] = x;
        }

        ll ans = 0;

        if (mp.find(1) != mp.end() && mp.find(2) != mp.end())
        {
            int x1 = mp[1];
            int x2 = mp[2];

            ans += 1LL * x1 * x2;
        }
        for (auto [a, b] : mp)
        {
            if (b > 1)
            {
                ans += (1LL * b * (b - 1)) / 2;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1899/problem/D