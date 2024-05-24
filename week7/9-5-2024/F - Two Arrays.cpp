/*
    Author: Tajwar Saiyeed
    Date: 2024-05-09 22:48:48
    File: F - Two Arrays.cpp
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
#define srtx(x, n) sort(x, x + n)
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
        int n;
        cin >> n;
        int a[n + 3], b[n + 3];
        fr(i, 0, n) cin >> a[i];
        fr(i, 0, n) cin >> b[i];
        srtx(a, n), srtx(b, n);
        int ans = 0;
        nfr(i, n - 1, -1) if (a[i] > b[i] || b[i] - a[i] > 1)
        {
            ans = 1;
            break;
        }

        if (ans == 0)
            yes;
        else
            no;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1589/C
// Submisson : https://vjudge.net/solution/51460862