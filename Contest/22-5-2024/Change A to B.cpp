/*
    Author: Tajwar Saiyeed
    Date: 2024-05-22 20:54:01
    File: Change A to B.cpp
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
        ll a, b, k;
        cin >> a >> b >> k;

        ll ans = 0;
        while (true)
        {

            bool x = (b % k == 0 && b / k >= a);

            if (x)
            {
                ans++;
                b = b / k;
            }
            else if (b % k == 0)
            {
                ans += b - a;
                break;
            }
            else
            {
                ans += b % k;
                b -= b % k;
            }
        }

        cout << ans << nl;
    }

    return 0;
}