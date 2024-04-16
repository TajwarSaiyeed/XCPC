/*
    Author: Tajwar Saiyeed
    Date: 2024-04-15 22:04:47
    File: A - Minimum XOR.cpp
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
        ll n, XOR = 0;
        cin >> n;
        vll a(n);
        fr(i, 0, n)
        {
            cin >> a[i];
            XOR ^= a[i];
        }
        ll ans = XOR;
        fr(i, 0, n) ans = min(ans, XOR ^ a[i]);
        cout << ans << '\n';
    }

    return 0;
}

// Problem : https://www.codechef.com/problems/MINMXOR
// Submission : https://vjudge.net/solution/50684206