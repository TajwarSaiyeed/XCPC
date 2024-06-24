/*
    Author: Tajwar Saiyeed
    Date: 2024-06-24 21:23:24
    File: A - Boats Competition.cpp
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
        fr(i, 0, n)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int mx = 0;
        fr(i, 1, (2 * n) + 1)
        {
            int total = 0;
            for (auto k : mp)
            {
                int x = i - k.first;
                if (x >= 1 && mp.count(x))
                    total += min(k.second, mp[x]);
            }
            total /= 2;
            mx = max(mx, total);
        }

        cout << mx << nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1399/C
// Submission : https://vjudge.net/solution/52074247