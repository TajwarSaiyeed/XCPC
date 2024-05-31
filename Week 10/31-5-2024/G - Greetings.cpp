/*
    Author: Tajwar Saiyeed
    Date: 2024-05-31 18:02:18
    File: G - Greetings.cpp
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
        ll n;
        cin >> n;
        // pbds<pair<int, int>> p;
        // pbds<int> q;

        // ll z = INT_MAX;
        // map<int, int> mp;
        // for (ll i = 0; i < n; i++)
        // {
        //     ll x, y;
        //     cin >> x >> y;
        //     z = min(z, x);
        //     p.insert({x, y});
        //     q.insert(y);
        //     mp[x] = y;
        // }

        // // for (auto it = mp.begin(); it != mp.end(); it++) // O(NlogN)
        // // {
        // //     cout << it->first << " " << it->second << endl; // O(logN)
        // // }

        // // cout << nl;

        // int v = mp[z];
        // auto val = q.order_of_key(v);
        // cout << val << nl;

        map<int, int> mp;
        pbds<int> p;

        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            mp[x] = y;
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
            p.insert(it->second);

        ll ans = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            ans += p.order_of_key(it->second);
            p.erase(it->second);
        }
        cout << ans << "\n";
    }

    return 0;
}