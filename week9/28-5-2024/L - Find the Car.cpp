/*
    Author: Tajwar Saiyeed
    Date: 2024-05-28 20:24:56
    File: L - Find the Car.cpp
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
        int n, k, q;
        cin >> n >> k >> q;
        vll a(k + 1), b(k + 1);
        a[0] = 0;
        b[0] = 0;
        fr(i, 1, k + 1) cin >> a[i];
        fr(i, 1, k + 1) cin >> b[i];

        fr(j, 0, q)
        {
            ll x;
            cin >> x;

            ll l = 0, r = k;
            while (l <= r)
            {
                ll mid = l + (r - l) / 2;
                if (a[mid] > x)
                    r = mid - 1;
                else
                    l = mid + 1;
            }

            if (a[r] == x)
            {
                cout << b[r] << " ";
                continue;
            }

            ll ans = b[r] + (x - a[r]) * (b[r + 1] - b[r]) / (a[r + 1] - a[r]);

            cout << ans << " ";
        }
        cout << nl;
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1971/E
// Submission : https://vjudge.net/solution/51525335