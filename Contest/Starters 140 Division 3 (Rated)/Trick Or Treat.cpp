/*
    Author: Tajwar Saiyeed
    Date: 2024-06-26 21:46:42
    File: Trick Or Treat.cpp
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
        ll n, m;
        cin >> n >> m;
        vll a(n), b(n);
        fr(i, 0, n) cin >> a[i];
        fr(i, 0, n) cin >> b[i];
        map<ll, ll> cnd, chlt;
        fr(i, 0, n) cnd[a[i] % m]++, chlt[b[i] % m]++;
        ll cnt = 0;
        for (auto [x, y] : cnd)
            if (chlt.find((m - x) % m) != chlt.end())
                cnt += y * chlt[(m - x) % m];

        cout << cnt << endl;
    }

    return 0;
}
