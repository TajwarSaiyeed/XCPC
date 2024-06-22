/*
    Author: Tajwar Saiyeed
    Date: 2024-06-22 22:28:04
    File: H - Make a Power of Two.cpp
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
// #define p1 cout << '1'
// #define p0 cout << '0'
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

        string s = to_string(n);
        int ans = 10;
        fr(i, 0, 10)
        {
            string t = to_string(1 << i);
            int p1 = 0, p2 = 0;
            while (p1 < s.size() && p2 < t.size())
            {
                if (s[p1] == t[p2])
                {
                    p1++;
                    p2++;
                }
                else
                {
                    p1++;
                }
            }
            ans = min(ans, (int)t.size() - p2 + (int)s.size() - p1);
        }
        cout << ans << nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1560/D