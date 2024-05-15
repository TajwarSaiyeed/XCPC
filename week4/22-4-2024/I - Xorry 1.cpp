/*
    Author: Tajwar Saiyeed
    Date: 2024-04-22 23:27:32
    File: I - Xorry 1.cpp
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
        ll x;
        cin >> x;
        ll cnt = 0, cpy = x;
        while (x >= 2)
        {
            x /= 2;
            cnt++;
        }
        ll ans = pow(2, cnt);
        cout << cpy - ans << " " << ans << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/problems/XORRY1
// Submission : https://vjudge.net/solution/51267489