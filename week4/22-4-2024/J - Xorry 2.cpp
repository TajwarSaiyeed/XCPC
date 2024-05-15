/*
    Author: Tajwar Saiyeed
    Date: 2024-04-22 23:28:07
    File: J - Xorry 2.cpp
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
        ll x, cnt = 0, s = 0, y, ans;
        cin >> x;

        while (x)
        {
            if ((x & 1) == 0)
            {
                cnt++;
                s++;
            }
            else if ((x & 1) == 1)
            {
                y = s;
                s = 0;
            }
            x >>= 1;
        }

        ans = pow(2, cnt - y);
        cout << ans << '\n';
    }

    return 0;
}

// Problem : https://www.codechef.com/problems/XORRY2
// Submission : https://vjudge.net/solution/51267649