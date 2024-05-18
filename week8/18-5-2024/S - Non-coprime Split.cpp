/*
    Author: Tajwar Saiyeed
    Date: 2024-05-18 20:58:29
    File: S - Non-coprime Split.cpp
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
        ll l, r, even = 0;
        cin >> l >> r;

        for (ll i = l; i <= r; i++)
        {
            if (i % 2 == 0 and i > 2)
            {
                even = i;
                break;
            }
        }
        if (r < 4)
        {
            cout << -1 << '\n';
        }
        else
        {

            if (r - l == 0 and even == 0)
            {
                ll divisor = 0;
                for (int j = 3; j * j <= l; j++)
                {
                    if (l % j == 0)
                    {
                        divisor = j;
                        break;
                    }
                }
                if (!divisor)
                {
                    cout << -1 << '\n';
                }
                else
                {
                    cout << divisor << " " << l - divisor << '\n';
                }
            }
            else
            {
                cout << even - 2 << " " << 2 << '\n';
            }
        }
    }
    return 0;
}

// Problem : https://codeforces.com/contest/1872/problem/C
// Submission: https://vjudge.net/solution/51358928