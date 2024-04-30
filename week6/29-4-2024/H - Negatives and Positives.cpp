/*
    Author: Tajwar Saiyeed
    Date: 2024-04-29 19:44:32
    File: H - Negatives and Positives.cpp
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
        int n;
        cin >> n;
        vll a(n);
        set<ll> x;
        ll ans = 0;
        ll cnt = 0;
        fr(i, 0, n)
        {
            cin >> a[i];
            if (a[i] < 0)
                cnt++;
            x.insert(abs(a[i]));
            ans += abs(a[i]);
        }

        if (cnt % 2 == 1)
            cout << ans - (2 * *x.begin()) << '\n';
        else
            cout << ans << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1791/E
// Submission : https://vjudge.net/solution/51007874