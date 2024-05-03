/*
    Author: Tajwar Saiyeed
    Date: 2024-05-03 21:00:00
    File: E - Wooden Toy Festival.cpp
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

void testCase()
{
    ll n;
    cin >> n;
    vll a(n);
    fr(i, 0, n) cin >> a[i];
    srt(a);
    ll l = 0, r = 1e18, ans;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll cnt = 1;
        for (int x = n - 1, y = n - 2; y >= 0;)
        {
            if (a[x] - mid - mid <= a[y])
                y--;
            else
            {
                cnt++;
                x = y;
                y = x - 1;
            }
        }
        if (cnt < 4)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;

        if (cnt < 4)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
        testCase();

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1840/D
// Submission : https://vjudge.net/solution/51081892