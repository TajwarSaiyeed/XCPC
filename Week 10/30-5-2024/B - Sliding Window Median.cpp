/*
    Author: Tajwar Saiyeed
    Date: 2024-05-30 21:47:06
    File: B - Sliding Window Median.cpp
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

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    pbds<pair<int, int>> p;
    while (r < n)
    {
        p.insert({a[r], r});
        if (r - l + 1 == k)
        {
            int pos = k / 2;
            if (k % 2 == 0)
            {
                pos--;
            }
            auto it = p.find_by_order(pos);
            cout << it->first << " ";
            p.erase({a[l], l});
            l++;
        }
        r++;
    }
    cout << '\n';

    return 0;
}

// Problem : https://cses.fi/problemset/task/1076/
// Submission : https://vjudge.net/solution/51564752