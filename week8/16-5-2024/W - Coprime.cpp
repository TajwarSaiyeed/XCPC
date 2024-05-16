/*
    Author: Tajwar Saiyeed
    Date: 2024-05-16 22:27:02
    File: W - Coprime.cpp
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
        int n;
        cin >> n;

        vi a(n);
        fr(i, 0, n)
        {
            cin >> a[i];
        }

        int ans = -1;
        fr(i, 0, n)
        {
            fr(j, i + 1, n)
            {
                if (__gcd(a[i], a[j]) == 1)
                {
                    ans = max(ans, i + j);
                }
            }
        }

        cout << ans << nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1742/D