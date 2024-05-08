/*
    Author: Tajwar Saiyeed
    Date: 2024-05-08 20:51:20
    File: Maximum Alternating Sum.cpp
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
        ll n;
        cin >> n;
        vll a(n);
        fr(i, 0, n) cin >> a[i];
        srt(a);
        ll ans = 0;
        fr(i, 0, n)
        {
            if (i < n / 2)
                ans += a[i];
            else
                ans -= a[i];
        }
        cout << abs(ans) << nl;
    }

    return 0;
}