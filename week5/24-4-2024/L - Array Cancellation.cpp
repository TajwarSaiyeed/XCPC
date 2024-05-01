/*
    Author: Tajwar Saiyeed
    Date: 2024-04-24 22:46:04
    File: L - Array Cancellation.cpp
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
        ll n;
        cin >> n;
        vll a(n);
        ll total = 0;
        ll neg = 0;
        fr(i, 0, n)
        {
            cin >> a[i];
            if (a[i] >= 0)
                total += a[i];
            else if (a[i] + total >= 0)
                total += a[i];
            else
            {
                a[i] += total;
                neg += a[i];
                total = 0;
            }
        }

        cout << abs(neg) << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1405/B
// Submission : https://vjudge.net/solution/51024894