/*
    Author: Tajwar Saiyeed
    Date: 2024-04-29 23:25:09
    File: B - Cookie Day.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl cout << '\n'
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
        ll n, k;
        cin >> n >> k;
        vll a(n);
        fr(i, 0, n) cin >> a[i];
        srt(a);
        ll ans = INT_MAX;
        fr(i, 0, n)
        {
            if (a[i] >= k)
                ans = min(ans, a[i] % k);
        }

        if (ans == INT_MAX)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }

    return 0;
}

// Submission : https://vjudge.net/solution/51003627