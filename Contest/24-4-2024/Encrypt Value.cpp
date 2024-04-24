
/*
    Author: Tajwar Saiyeed
    Date: 2024-04-24 21:58:14
    File: Encrypt Value.cpp
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
        ll ans = a[0], mod = 1000000007;

        fr(i, 1, n)
        {
            if (a[i] == 1 || a[i] == 0 || (ans <= 1 && a[i] > 1))
            {
                ans = (ans + a[i]) % mod;
            }
            else
            {
                ans = (ans * a[i]) % mod;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}