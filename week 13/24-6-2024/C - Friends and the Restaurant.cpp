/*
    Author: Tajwar Saiyeed
    Date: 2024-06-24 21:35:55
    File: C - Friends and the Restaurant.cpp
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
        ll n, x;
        cin >> n;
        vll a(n, 0);
        fr(i, 0, n) cin >> x, a[i] -= x;
        fr(i, 0, n) cin >> x, a[i] += x;
        srtG(a);
        int ans = 0, l = 0, r = n - 1;
        while (l < r)
        {
            if (a[l] > -1 and a[r] > -1)
                ans++, l++, r--;
            else if (a[l] < 0 and a[r] < 0)
                break;
            else if (a[l] > -1)
                if (a[l] >= abs(a[r]))
                    ans++, l++, r--;
                else
                    r--;
        }

        cout << ans << endl;
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1729/D
// Submisson :  https://vjudge.net/solution/52074509