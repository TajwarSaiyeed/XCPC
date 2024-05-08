/*
    Author: Tajwar Saiyeed
    Date: 2024-05-08 19:37:30
    File: B - Building an Aquarium.cpp
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
        ll n, x;
        cin >> n >> x;
        vll a(n);
        fr(i, 0, n) cin >> a[i];

        ll l = 1, r = 1e10;

        while (l < r - 1)
        {
            ll mid = l + (r - l) / 2;
            ll sum = 0;
            fr(i, 0, n) if (a[i] < mid) sum += (mid - a[i]);
            if (sum <= x)
                l = mid;
            else
                r = mid;
        }
        cout << l << nl;
    }

    return 0;
}