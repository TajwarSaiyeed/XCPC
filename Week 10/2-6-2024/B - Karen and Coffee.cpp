/*
    Author: Tajwar Saiyeed
    Date: 2024-06-02 22:15:45
    File: B - Karen and Coffee.cpp
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

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> a(200002, 0);

    fr(i, 0, n)
    {
        int l, r;
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }

    fr(i, 1, 200002)
    {
        a[i] += a[i - 1];
    }

    vector<int> ans(200002, 0);

    fr(i, 1, 200002)
    {
        if (a[i] >= k)
        {
            ans[i] = 1;
        }
    }

    fr(i, 1, 200002)
    {
        ans[i] += ans[i - 1];
    }

    fr(i, 0, q)
    {
        int l, r;
        cin >> l >> r;
        cout << ans[r] - ans[l - 1] << nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/816/B
// Submission : https://vjudge.net/solution/51644451