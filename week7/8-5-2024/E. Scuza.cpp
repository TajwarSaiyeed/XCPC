/*
    Author: Tajwar Saiyeed
    Date: 2024-05-08 18:08:47
    File: E. Scuza.cpp
*/
#include <bits/stdc++.h>
using namespace std;
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
#define srt(vll) sort(a.begin(), a.end())
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        vector<ll> k(q);
        fr(i, 0, n) cin >> a[i];
        fr(i, 0, q) cin >> k[i];
        srt(a);
        fr(i, 0, q)
        {
            ll l = 0, r = n - 1;
            while (l <= r)
            {
                ll mid = l + (r - l) / 2;
                if (a[mid] <= k[i])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
            ll ans = 0;
            for (int j = 0; j <= r; ++j)
                ans += a[j];
            cout << ans << " ";
        }
        cout << '\n';
    }

    return 0;
}