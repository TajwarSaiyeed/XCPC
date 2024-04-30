/*
    Author: Tajwar Saiyeed
    Date: 2024-04-29 19:43:48
    File: G - Teleporters (Easy Version).cpp
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, c;
        cin >> n >> c;
        vll a(n + 1);
        fr(i, 1, n + 1)
        {
            cin >> a[i];
            a[i] += i;
        }
        srt(a);
        ll sum = 0, ans = 0;
        fr(i, 1, n + 1)
        {
            if (sum + a[i] > c)
                break;
            sum += a[i];
            ans++;
        }

        cout << ans;
        nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1791/G1
// Submission : https://vjudge.net/solution/51018209