/*
    Author: Tajwar Saiyeed
    Date: 2024-05-31 17:44:34
    File: pbds.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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

    /*
        set = less
        multiset = less_equal
    */

    // int n;
    // cin >> n;
    // pbds<pair<int, int>> p;
    // fr(i, 0, n)
    // {
    //     int x;
    //     cin >> x;
    //     p.insert({x, i});
    // }

    // p.erase({4, 1});

    // for (auto [x, y] : p)
    // {
    //     cout << x << " " << y << nl;
    // }

    // cout << nl;

    int n;
    cin >> n;
    pbds<int> p;
    fr(i, 0, n)
    {
        int x;
        cin >> x;
        p.insert(x);
    }

    // int x = p.order_of_key(10);
    // cout << x << nl;

    auto it = p.find_by_order(3);
    cout << *it << nl;

    for (auto val : p)
    {
        cout << val << " ";
    }

    cout << nl;
    return 0;
}