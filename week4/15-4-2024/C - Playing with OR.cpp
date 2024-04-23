/*
    Author: Tajwar Saiyeed
    Date: 2024-04-15 22:05:25
    File: C - Playing with OR.cpp
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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll k, n, ans = 0;
        cin >> k >> n;
        vll a(k + 1), b(k + 1);
        fr(i, 1, k + 1) cin >> a[i];

        fr(i, 1, k + 1)
        {
            if (a[i] % 2)
            {
                b[i] = 1;
            }
            b[i] += b[i - 1];
        }

        fr(i, 1, k - n + 2) if (b[i + n - 1] - b[i - 1] > 0)
            ans++;

        cout << ans << '\n';
    }

    return 0;
}

// Problem : https://www.codechef.com/problems/FIZZBUZZ2304
// Submission : https://vjudge.net/solution/50850997